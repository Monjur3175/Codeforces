#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }
int main()
{
    int n, m, ans = 0, cnt = 0, mx = 0, mn = 0, x, y;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
        ans += arr[i];
    }
    sort(arr, arr + m);
    // for minimum value
    y = n;
    for (int i = 0; i < m && n > 0; i++)
    {
        x = arr[i];
        while (x > 0 && n > 0)
        {
            mn += x;
            x--;
            n--;
        }
    }
    // for maximum value
    n = y;
    for (int i = 0; i < n; i++)
    {
        sort(arr, arr + m);
        mx += arr[m - 1];
        arr[m - 1]--;
    }
    cout << mx << " " << mn << endl;
    return 0;
}