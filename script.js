function checkSyntax() {
    const code = document.getElementById('codeInput').value.trim();
    const language = document.getElementById('language').value;
    const output = document.getElementById('output');

    const lines = code.split("\n");
    let messages = [];

    if (language === "c") {
        let hasMain = false;
        lines.forEach((line, index) => {
            if (line.includes("main(")) hasMain = true;

            // Simple check for missing semicolons (basic heuristic)
            const trimmedLine = line.trim();
            if (trimmedLine !== "" &&
                !trimmedLine.endsWith(";") &&
                !trimmedLine.endsWith("{") && // Don't flag lines ending with {
                !trimmedLine.endsWith("}") && // Don't flag lines ending with }
                !trimmedLine.startsWith("#include") && // Don't flag include directives
                !trimmedLine.startsWith("//") && // Don't flag comments
                !trimmedLine.startsWith("/*") && // Don't flag multi-line comments
                !trimmedLine.endsWith("*/") &&
                !trimmedLine.includes("for (") && // Don't flag loop headers
                !trimmedLine.includes("while (") &&
                !trimmedLine.includes("if (") &&
                !trimmedLine.includes("else") &&
                !trimmedLine.includes("switch (") &&
                !trimmedLine.includes("do") &&
                !trimmedLine.includes("typedef") &&
                !trimmedLine.includes("struct") &&
                !trimmedLine.includes("enum")
                ) {
                messages.push(`⚠ C Warning at line ${index + 1}: Possibly missing semicolon or an incomplete statement.`);
            }
        });
        if (!hasMain) {
            messages.unshift("⚠ C Error: Missing 'main()' function.");
        }
    }

    else if (language === "python") {
        let hasDef = false;
        lines.forEach((line, index) => {
            if (line.includes("def ")) hasDef = true;
            if (line.includes(";")) {
                messages.push(`⚠ Python Warning at line ${index + 1}: Unnecessary semicolon.`);
            }
            // Basic indentation check (very simple, not robust for complex cases)
            const leadingSpaces = line.match(/^\s*/)[0].length;
            if (leadingSpaces > 0 && index > 0) {
                const prevLine = lines[index - 1];
                const prevLeadingSpaces = prevLine.match(/^\s*/)[0].length;
                if (line.trim() !== '' && prevLine.trim().endsWith(':') && leadingSpaces <= prevLeadingSpaces) {
                    messages.push(`⚠ Python Warning at line ${index + 1}: Expected indentation after colon.`);
                }
            }
        });
        if (!hasDef && code.trim() !== '') { // Only warn if there's actual code but no def
            messages.unshift(`⚠ Python Warning: No 'def' function found. Consider wrapping logic in functions.`);
        }
    }

    else if (language === "java") {
        let hasMain = false;
        lines.forEach((line, index) => {
            if (line.includes("public static void main(String[] args)")) hasMain = true;

            const trimmedLine = line.trim();
            if (trimmedLine !== "" &&
                !trimmedLine.endsWith(";") &&
                !trimmedLine.endsWith("{") &&
                !trimmedLine.endsWith("}") &&
                !trimmedLine.startsWith("//") &&
                !trimmedLine.startsWith("/*") &&
                !trimmedLine.endsWith("*/") &&
                !trimmedLine.includes("for (") &&
                !trimmedLine.includes("while (") &&
                !trimmedLine.includes("if (") &&
                !trimmedLine.includes("else") &&
                !trimmedLine.includes("switch (") &&
                !trimmedLine.includes("import ") && // Don't flag imports
                !trimmedLine.includes("package ") && // Don't flag package declarations
                !trimmedLine.includes("class ") && // Don't flag class declarations
                !trimmedLine.includes("interface ") && // Don't flag interface declarations
                !trimmedLine.includes("enum ")
                ) {
                messages.push(`⚠ Java Warning at line ${index + 1}: Possibly missing semicolon or an incomplete statement.`);
            }
        });
        if (!hasMain && code.trim() !== '') { // Only warn if there's actual code but no main
            messages.unshift("⚠ Java Error: Missing 'public static void main(String[] args)' method.");
        }
    }

    if (messages.length === 0) {
        output.innerHTML = "<strong>Result:</strong> ✅ No major syntax issues detected.";
        output.style.color = '#28a745'; // Green for success
    } else {
        output.innerHTML = "<strong>Result:</strong><ul style='list-style-type: none; padding-left: 0;'><li>" + messages.join("</li><li>") + "</li></ul>";
        output.style.color = '#dc3545'; // Red for errors/warnings
    }
}

function saveCode() {
    const code = document.getElementById('codeInput').value.trim();
    const language = document.getElementById('language').value;

    if (!code) {
        alert("Please write some code before saving.");
        return;
    }

    let savedCodes = JSON.parse(localStorage.getItem('codes')) || [];
    // Add a timestamp for unique identification/sorting later if needed
    savedCodes.push({ language, code, savedAt: new Date().toISOString() });
    localStorage.setItem('codes', JSON.stringify(savedCodes));

    alert("Code saved successfully!"); // Provide feedback
}

function downloadCode() {
    const code = document.getElementById('codeInput').value.trim();
    const language = document.getElementById('language').value;

    if (!code) {
        alert("Please write some code to download.");
        return;
    }

    const blob = new Blob([code], { type: "text/plain" });
    const a = document.createElement('a');
    a.href = URL.createObjectURL(blob);

    let filename = "mycode";
    if (language === "c") filename += ".c";
    else if (language === "python") filename += ".py";
    else if (language === "java") filename += ".java";
    else filename += ".txt"; // Default to .txt for unknown languages

    a.download = filename;
    document.body.appendChild(a);
    a.click();
    document.body.removeChild(a);
    URL.revokeObjectURL(a.href); // Clean up the URL object
}

function toggleTheme() {
    const isDark = document.body.classList.toggle('dark');
    // Save dark mode preference to localStorage
    if (isDark) {
        localStorage.setItem('darkMode', 'enabled');
    } else {
        localStorage.removeItem('darkMode');
    }
}

// Event listener for the sidebar toggle button AND loading saved code
document.addEventListener('DOMContentLoaded', () => {
    const sidebarToggle = document.getElementById('sidebarToggle');
    const codeInput = document.getElementById('codeInput');
    const languageSelect = document.getElementById('language');

    if (sidebarToggle) {
        sidebarToggle.addEventListener('click', () => {
            // Redirect to the new saved codes page
            window.location.href = 'saved-codes.html';
        });
    }

    // Apply dark mode preference on load for index.html
    if (localStorage.getItem('darkMode') === 'enabled') {
        document.body.classList.add('dark');
    }

    // Check if there's code to load from the saved codes page
    const codeToLoad = localStorage.getItem('codeToLoad');
    const languageToLoad = localStorage.getItem('languageToLoad');

    if (codeToLoad && languageToLoad) {
        codeInput.value = codeToLoad;
        languageSelect.value = languageToLoad;

        // Clear the items from localStorage so they don't load again on next visit
        localStorage.removeItem('codeToLoad');
        localStorage.removeItem('languageToLoad');
        
        // Optional: Run syntax check automatically after loading the code
        checkSyntax(); 
    }
});