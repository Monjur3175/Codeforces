#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }
int main()
{
    string s, hello = "hello";
    cin >> s;
    ll j = 0, pas = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == hello[j])
        {
            j++;
            pas++;
        }
    }
    if (pas == 5)
    {
        yes();
    }
    else
    {
        no();
    }

    return 0;
}