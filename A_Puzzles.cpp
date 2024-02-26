#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }
int main()
{
    ll n, m;
    ll arr[1000];
    cin >> n >> m;
    for (ll i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + m);
    ll least = arr[n - 1] - arr[0];
    for (ll i = 1; i <= m - n; i++)
    {
        if (arr[i + n - 1] - arr[i] < least)
        {
            least = arr[i + n - 1] - arr[i];
        }
    }
    cout << least << endl;

    return 0;
}