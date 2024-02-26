#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }
void solution()
{
    ll k, n;
    cin >> k >> n;
    ll a[k];
    for (ll i = 0; i < k; i++)
    {
        cin >> a[i];
    }
    if (!is_sorted(a, a + k) && n == 1)
    {
        no();
    }
    else
    {
        yes();
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