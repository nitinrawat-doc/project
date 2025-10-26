#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n;
    cout << "enter the n :";
    cin >> n;
    map<int, int> f;
    for (int i = 0; i < n; i++)
    {
        int singer;
        cout << "enter the number of singers: ";
        cin >> singer;
        f[singer]++;
    }
    int max_songs = 0;

    for (auto &p : f)
    {
        if (p.second > max_songs)
        {
            max_songs = p.second;
        }
    }
    for (auto &p : f)
    {
        if (p.second == max_songs)
        {
            cout << "\nfavourite song is : " << p.first << " ";
        }
    }

    return 0;
}