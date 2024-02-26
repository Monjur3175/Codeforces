#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void yes() { cout << "Yes" << endl; }
void no() { cout << "No" << endl; }
void solution()
{
    ll n, x;
    cin >> n;
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        mp[x]++;
    }
    if (mp.size() == 1)
    {
        yes();
    }
    else if (mp.size() == 2)
    {
        if (abs(mp[x] + mp[x] - n) <= 1)
        {
            yes();
        }
        else
        {
            no();
        }
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