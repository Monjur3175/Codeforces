#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void yes(){cout << "YES" << endl;}
void no(){cout << "NO" << endl;}
void solution()
{
    string s;
    cin >> s;
    ll a=s[0]-'0',b=0;
    for (ll i = 1; i < s.size(); i++)
    {
        if (s[i]!='0'||b>0)
        {
            b=b*10+(s[i]-'0');
        }
        else
        {
            a=a*10;
        }
    }
    if (a<b)
    {
        cout<<a<<" "<<b<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    
    
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}