#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }
int main()
{
    ll a, t;
    char s;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        cin >> s >> a;
        for (ll j = 1; j <= 8; j++)
        {
            if (j != a)
            {
                cout << s << j << endl;
            }
            if (char(96 + j) != s)
            {
                cout << char(96 + j) << a << endl;
            }
        }
    }

    return 0;
}