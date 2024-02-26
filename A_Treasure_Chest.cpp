#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }
void solution()
{
    int x, y, k;
    cin >> x >> y >> k;
    cout << max(x, y) + max(y - x - k, 0) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}
