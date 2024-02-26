#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }
void solution()
{
    ll n, c = 0;
    cin >> n;
    string s;
    cin >> s;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            c++;
        }
    }
    if (c > 0)
    {
        yes();
    }
    else
    {
        no();
    }
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