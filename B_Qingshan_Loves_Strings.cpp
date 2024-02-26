#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void yes() { cout << "Yes" << endl; }
void no() { cout << "No" << endl; }
void solution()
{
    ll n, m, flag = 0;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    for (int i = 1; i < m; i++)
    {
        if (t[i] == t[i - 1])
        {
            flag = 1;
            break;
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            if (s[i - 1] == t[0] || s[i] == t[m - 1] || flag)
            {
                no();
                return;
            }
        }
    }
    yes();
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