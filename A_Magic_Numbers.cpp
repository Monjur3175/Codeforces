#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }
int main()
{
    string s;
    cin >> s;
    bool flag = true;
    for (ll i = 0; i < s.length();)
    {
        if (s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4')
        {
            i += 3;
        }
        else if (s[i] == '1' && s[i + 1] == '4')
        {
            i += 2;
        }
        else if (s[i] == '1')
        {
            i++;
        }
        else
        {
            flag = false;
            break;
        }
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