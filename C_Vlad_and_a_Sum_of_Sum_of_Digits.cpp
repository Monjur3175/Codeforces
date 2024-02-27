#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }
const ll N = 2e5 + 10;
ll w[N];
int main()
{
    ll t;
    cin >> t;
    for (ll i = 1; i < N; i++)
    {
        w[i] = w[i - 1];
        for (ll o = i; o; o /= 10)
        {
            w[i] += o % 10;
        }
    }
    while (t--)
    {
        ll n;
        cin >> n;
        cout << w[n] << endl;
    }

    return 0;
}