#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }
int main()
{
    ll n;
    cin >> n;
    for (ll row = -n; row <= n; row++)
    {
        ll top = n - abs(row);
        for (ll i = 0; i < abs(row); i++)
        {
            cout << " ";
        }
        for (ll i = 0; i < top; i++)
        {
            cout << i << " ";
        }
        for (ll i = top; i > 0; i--)
        {
            cout << i << " ";
        }
        cout << 0 << endl;
    }

    return 0;
}