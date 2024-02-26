#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }
void solution()
{
    ll n, x;

    cin >> n >> x;
    ll a[n], ans = 0;
    a[0] = 0;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        ans = max(ans, a[i] - a[i - 1]);
    }
    ans = max(ans, 2 * (x - a[n]));
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
/*
    for (ll i = 1; i < n; i++)
    {

        Xax = max(arr[i + 1] - arr[i], 2 * (x - arr[n]));
    }
    if (Xax < arr[n] - arr[n - 1])
    {
        Xax = arr[n] - arr[n - 1];
    }
    if (n == 1)
    {
        Xax = max(x - arr[1], arr[1]);
    }*/