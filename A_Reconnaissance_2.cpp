#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }
int main()
{
    ll n;
    cin >> n;
    ll a[101], b[101];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll d = 0, m = 1001;
    d = abs(a[0] - a[n - 1]);
    m = min(m, d);
    ll idx1 = 1, idx2 = n;
    for (ll i = 0; i < n; i++)
    {
        d = abs(a[i] - a[i + 1]);
        if (d < m)
        {
            m = d;
            idx1 = i + 1;
            idx2 = i + 2;
        }
    }
    cout << idx1 << " " << idx2 << endl;
    return 0;
}