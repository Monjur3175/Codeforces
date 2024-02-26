#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }
int main()
{
    ll s, n;
    cin >> s >> n;
    pair<ll, ll> arr[1000];
    bool flag = 1;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr, arr + n);
    for (ll i = 0;i < n;i++)
    {
        if (s <= arr[i].first)
        {
            flag = 0;
            break;
        }
        s += arr[i].second;
    }
    if (flag)
    {
        yes();
    }
    else
    {
        no();
    }

    return 0;
}
