#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void yes(){cout << "YES" << endl;}
void no(){cout << "NO" << endl;}
void solution()
{
    ll a,b,c;;
    cin >> a>>b>>c;
    if (a!=b&&a!=c)
    {
        cout<<a<<endl;
    }
    if (b!=a&&b!=c)
    {
        cout<<b<<endl;
    }
    if (c!=b&&c!=a)
    {
        cout<<c<<endl;
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