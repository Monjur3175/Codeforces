#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }
int main()
{
    string s;
    cin >> s;
    ll flag = 1;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 2;
            cout << " ";
        }
        else
        {
            cout << s[i];
        }
    }

    return 0;
}