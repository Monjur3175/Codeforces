#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }
int main()
{
    ll k, total = 0;
    cin >> k;
    ll arr[12];
    for (ll i = 0; i < 12; i++)
    {
        cin >> arr[i];
        total += arr[i];
    }
    ll max = 0, sum = 0, cnt = 0;
    if (total < k)
    {
        cout << -1 << endl;
    }
    else
    {
        sort(arr, arr + sizeof(arr) / sizeof(arr[0]), greater<int>());
        while (sum < k)
        {
            sum += arr[max];
            max += 1;
        }
        cout << max << endl;
    }

    return 0;
}