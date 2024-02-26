#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n <= 6 || n == 9)
        {
            no();
        }
        else
        {
            yes();
            if (n % 3 != 0)
            {
                cout << 1 << " " << 2 << " " << n - 3 << endl;
            }
            else
            {
                cout << 1 << " " << 4 << " " << n - 5 << endl;
            }
        }
    }

    return 0;
}