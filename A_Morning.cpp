#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }
void solution()
{
    string s;
    cin >> s;
    int ans = 0;
    unordered_map<char, int> mp;
    mp['1'] = 1;
    mp['2'] = 2;
    mp['3'] = 3;
    mp['4'] = 4;
    mp['5'] = 5;
    mp['6'] = 6;
    mp['7'] = 7;
    mp['8'] = 8;
    mp['9'] = 9;
    mp['0'] = 10;
    for (ll i = 1; i < 4; i++)
    {
        ll diff = abs(mp[s[i]] - mp[s[i - 1]]);
        ans += diff;
    }
    ans += 4;
    ans += (abs(mp[s[0]] - 1));
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