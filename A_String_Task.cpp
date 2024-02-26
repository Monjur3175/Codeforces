#include <bits/stdc++.h>
using namespace std;

void solution()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        char ch = tolower(s[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y')
        {
            continue;
        }
        else
        {
            cout << "." << ch;
        }
    }
}
int main()
{
    // int t;
    // cin >> t;
    // while(t--){
    solution();
    return 0;
}