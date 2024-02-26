#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }
int main()
{
    ll n, m, a[50], b, max(0), count(1);
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    for (ll i = 0; i < m; i++)
    {
        cin >> b;
        for (ll j = 0; j < n; j++)
        {
            if (b % a[j] == 0)
            {
                int x = b / a[j];
                if (x > max)
                {
                    max = x;
                    count = 1;
                }
                else if (x == max)
                {
                    count += 1;
                }
                break;
            }
        }
    }
    cout << count << endl;
    return 0;
}