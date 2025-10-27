const themeToggle = document.getElementById('themeToggle');
const body = document.body;

if (localStorage.getItem('darkMode') === 'enabled') {
    body.classList.add('dark');
    themeToggle.textContent = '☀️';
}

themeToggle.addEventListener('click', () => {
    body.classList.toggle('dark');
    const isDark = body.classList.contains('dark');
    themeToggle.textContent = isDark ? '☀️' : '🌙';
    localStorage.setItem('darkMode', isDark ? 'enabled' : 'disabled');
});

const menuBtn = document.getElementById('menuBtn');
const sidebar = document.getElementById('sidebar');
const closeBtn = document.getElementById('closeBtn');
const overlay = document.getElementById('overlay');

menuBtn.addEventListener('click', () => {
    sidebar.classList.add('open');
    overlay.classList.add('active');
});

closeBtn.addEventListener('click', () => {
    sidebar.classList.remove('open');
    overlay.classList.remove('active');
});

overlay.addEventListener('click', () => {
    sidebar.classList.remove('open');
    overlay.classList.remove('active');
});

const codeInput = document.getElementById('codeInput');
const lineNumbers = document.getElementById('lineNumbers');
const languageSelect = document.getElementById('language');

function updateLineNumbers() {
    const lines = codeInput.value.split('\n').length;
    lineNumbers.textContent = Array.from({length: lines}, (_, i) => i + 1).join('\n');
}

function updateStats() {
    const code = codeInput.value;
    const lines = code.split('\n').length;
    const chars = code.length;
    
    document.getElementById('lineCount').textContent = lines;
    document.getElementById('charCount').textContent = chars;
    document.getElementById('currentLang').textContent = languageSelect.options[languageSelect.selectedIndex].text;
    
    const savedCodes = JSON.parse(localStorage.getItem('codes')) || [];
    document.getElementById('savedCount').textContent = savedCodes.length;
}

codeInput.addEventListener('input', () => {
    updateLineNumbers();
    updateStats();
});

codeInput.addEventListener('scroll', () => {
    lineNumbers.scrollTop = codeInput.scrollTop;
});

languageSelect.addEventListener('change', updateStats);

updateLineNumbers();
updateStats();

const codeToLoad = localStorage.getItem('codeToLoad');
const languageToLoad = localStorage.getItem('languageToLoad');

if (codeToLoad && languageToLoad) {
    codeInput.value = codeToLoad;
    languageSelect.value = languageToLoad;
    localStorage.removeItem('codeToLoad');
    localStorage.removeItem('languageToLoad');
    updateLineNumbers();
    updateStats();
    checkSyntax();
}

function checkSyntax() {
    const code = codeInput.value.trim();
    const language = languageSelect.value;
    const output = document.getElementById('output');

    if (!code) {
        output.innerHTML = '<p style="opacity: 0.5;">Please write some code first!</p>';
        return;
    }

    const lines = code.split('\n');
    let messages = [];

    if (language === 'c' || language === 'cpp') {
        let hasMain = false;
        let braceCount = 0;
        
        lines.forEach((line, index) => {
            if (line.includes('main(')) hasMain = true;
            braceCount += (line.match(/{/g) || []).length;
            braceCount -= (line.match(/}/g) || []).length;

            const trimmed = line.trim();
            if (trimmed && !trimmed.endsWith(';') && !trimmed.endsWith('{') && 
                !trimmed.endsWith('}') && !trimmed.startsWith('#') && 
                !trimmed.startsWith('//') && !trimmed.includes('for (') &&
                !trimmed.includes('while (') && !trimmed.includes('if (') &&
                !trimmed.includes('else') && !trimmed.includes('switch (') &&
                !trimmed.includes('do') && !trimmed.includes('typedef') &&
                !trimmed.includes('struct') && !trimmed.includes('enum')) {
                messages.push(`Line ${index + 1}: Possibly missing semicolon`);
            }
        });

        if (!hasMain) messages.unshift('Missing main() function');
        if (braceCount !== 0) messages.push(`Brace mismatch: ${braceCount > 0 ? 'missing closing' : 'extra closing'} brace(s)`);
    }
    else if (language === 'python') {
        lines.forEach((line, index) => {
            if (line.includes(';')) {
                messages.push(`Line ${index + 1}: Unnecessary semicolon in Python`);
            }
            if (index > 0 && lines[index - 1].trim().endsWith(':')) {
                const prevIndent = lines[index - 1].match(/^\s*/)[0].length;
                const currIndent = line.match(/^\s*/)[0].length;
                if (line.trim() && currIndent <= prevIndent) {
                    messages.push(`Line ${index + 1}: Expected indentation after colon`);
                }
            }
        });
    }
    else if (language === 'java') {
        let hasMain = false;
        let braceCount = 0;

        lines.forEach((line, index) => {
            if (line.includes('public static void main(String[] args)')) hasMain = true;
            braceCount += (line.match(/{/g) || []).length;
            braceCount -= (line.match(/}/g) || []).length;

            const trimmed = line.trim();
            if (trimmed && !trimmed.endsWith(';') && !trimmed.endsWith('{') &&
                !trimmed.endsWith('}') && !trimmed.startsWith('//') &&
                !trimmed.includes('import ') && !trimmed.includes('package ') &&
                !trimmed.includes('class ') && !trimmed.includes('for (') &&
                !trimmed.includes('while (') && !trimmed.includes('if (') &&
                !trimmed.includes('interface ') && !trimmed.includes('enum ')) {
                messages.push(`Line ${index + 1}: Possibly missing semicolon`);
            }
        });

        if (!hasMain && code.trim()) messages.unshift('Missing main method');
        if (braceCount !== 0) messages.push('Brace mismatch detected');
    }
    else if (language === 'javascript') {
        let braceCount = 0;
        let parenCount = 0;

        lines.forEach((line) => {
            braceCount += (line.match(/{/g) || []).length;
            braceCount -= (line.match(/}/g) || []).length;
            parenCount += (line.match(/\(/g) || []).length;
            parenCount -= (line.match(/\)/g) || []).length;
        });

        if (braceCount !== 0) messages.push('Brace mismatch detected');
        if (parenCount !== 0) messages.push('Parenthesis mismatch detected');
    }

    if (messages.length === 0) {
        output.innerHTML = '<div class="output-success">✅ No syntax issues detected! Your code looks great!</div>';
    } else {
        output.innerHTML = '<ul class="output-errors">' + 
            messages.map(msg => `<li>⚠️ ${msg}</li>`).join('') + 
            '</ul>';
    }
}

function saveCode() {
    const code = codeInput.value.trim();
    const language = languageSelect.value;

    if (!code) {
        alert('Please write some code before saving.');
        return;
    }

    let savedCodes = JSON.parse(localStorage.getItem('codes')) || [];
    savedCodes.push({
        language,
        code,
        savedAt: new Date().toISOString(),
        name: `${language.toUpperCase()} Code #${savedCodes.length + 1}`
    });
    localStorage.setItem('codes', JSON.stringify(savedCodes));
    updateStats();
    alert('✅ Code saved successfully!');
}

function downloadCode() {
    const code = codeInput.value.trim();
    const language = languageSelect.value;

    if (!code) {
        alert('Please write some code to download.');
        return;
    }

    const extensions = {
        c: '.c',
        cpp: '.cpp',
        python: '.py',
        java: '.java',
        javascript: '.js'
    };

    const blob = new Blob([code], { type: 'text/plain' });
    const a = document.createElement('a');
    a.href = URL.createObjectURL(blob);
    a.download = `code${extensions[language] || '.txt'}`;
    a.click();
    URL.revokeObjectURL(a.href);
}

function copyCode() {
    const code = codeInput.value;
    if (!code) {
        alert('Nothing to copy!');
        return;
    }
    navigator.clipboard.writeText(code).then(() => {
        alert('✅ Code copied to clipboard!');
    });
}

function formatCode() {
    let code = codeInput.value;
    const language = languageSelect.value;

    if (language === 'python') {
        const lines = code.split('\n');
        let indentLevel = 0;
        code = lines.map(line => {
            const trimmed = line.trim();
            if (trimmed.endsWith(':')) {
                const formatted = '    '.repeat(indentLevel) + trimmed;
                indentLevel++;
                return formatted;
            } else if (trimmed && indentLevel > 0) {
                return '    '.repeat(indentLevel) + trimmed;
            }
            return trimmed;
        }).join('\n');
    } else {
        code = code.replace(/\s*{\s*/g, ' {\n');
        code = code.replace(/\s*}\s*/g, '\n}\n');
        code = code.replace(/;/g, ';\n');
    }

    codeInput.value = code;
    updateLineNumbers();
    updateStats();
    alert('✨ Code formatted!');
}

document.getElementById('clearBtn').addEventListener('click', () => {
    if (confirm('Are you sure you want to clear the editor?')) {
        codeInput.value = '';
        updateLineNumbers();
        updateStats();
        document.getElementById('output').innerHTML = '<p style="opacity: 0.5;">Your syntax check results will appear here...</p>';
        sidebar.classList.remove('open');
        overlay.classList.remove('active');
    }
});

document.getElementById('aboutLink').addEventListener('click', (e) => {
    e.preventDefault();
    alert('CodeLink Syntax Pro v2.0\n\nA powerful syntax checker with real-time analysis!\n\nFeatures:\n✓ Multi-language support\n✓ Line numbers\n✓ Live statistics\n✓ Dark mode\n✓ Code formatting\n✓ Save & Download');
    sidebar.classList.remove('open');
    overlay.classList.remove('active');
});

document.getElementById('settingsLink').addEventListener('click', (e) => {
    e.preventDefault();
    alert('Settings coming soon! 🎯');
    sidebar.classList.remove('open');
    overlay.classList.remove('active');
});