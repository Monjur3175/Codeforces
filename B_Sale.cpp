#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }
int main()
{
    ll n, m;
    cin >> n >> m;
    int a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ll s = 0;
    for (ll i = 0; i < m; i++)
    {
        if (a[i] >= 0)
        {
            break;
        }
        s += a[i];
    }
    cout << -s << endl;
    return 0;
}