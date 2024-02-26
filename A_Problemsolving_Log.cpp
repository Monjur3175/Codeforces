#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }
void solution()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 0, x = 1;
    for (char ch = 'A'; ch <= 'Z'; ch++)
    {
        ans = ans + (count(s.begin(), s.end(), ch) >= x);
        x++;
    }
    cout << ans << endl;
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