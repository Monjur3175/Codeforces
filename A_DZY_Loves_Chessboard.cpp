#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }
int main()
{
    ll n, m;
    cin >> n >> m;
    char mp[110][110];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mp[j][i];
            if (mp[j][i] == '.')
            {
                if ((j + i) % 2 == 0)
                {
                    mp[j][i] = 'B';
                }
                else
                {
                    mp[j][i] = 'W';
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mp[j][i];
        }
        cout << endl;
    }

    return 0;
}