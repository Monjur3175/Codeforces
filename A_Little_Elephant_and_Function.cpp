#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }

int main()
{
    ll n;
    cin >> n;
    cout << n;
    for (ll i = 1; i < n; ++i)
    {
        cout << " " << i;
    }
    cout << endl;

    return 0;
}