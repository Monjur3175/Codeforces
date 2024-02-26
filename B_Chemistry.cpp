#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int n, k, c = 0;
        cin >> n >> k;
        cin >> s;
        int a[28] = {0};
        for (int i = 0; i < n; i++)
        {
            a[s[i] - 'a']++;
        }
        for (int i = 0; i <= 25; i++)
        {
            if (a[i] % 2 == 1)
                c++;
        }
        if (c - 1 <= k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
