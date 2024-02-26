#include <bits/stdc++.h>
using namespace std;

typedef int ll;
void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }
void solution()
{
    string s;
    cin >> s;
    ll B = 0, b = 0;
    for (ll i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == 'B')
        {
            B++;
        }
        else if (s[i] == 'b')
        {
            b++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z' && b)
        {
            s[i] = '0';
            b--;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z' && B)
        {
            s[i] = '0';
            B--;
        }
    }
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] != 'B' && s[i] != 'b' && s[i] != '0')
        {
            cout << s[i];
        }
    }
    cout << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}