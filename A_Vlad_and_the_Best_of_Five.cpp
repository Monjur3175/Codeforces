#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void yes(){cout << "YES" << endl;}
void no(){cout << "NO" << endl;}
void solution()
{
    string s;
    int A=0,B=0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]=='A')
    {
        A++;
    }
    if (s[i]=='B')
    {
        B++;
    }
    }
    if (A>B)
    {
        cout<<"A"<<endl;
    }
    if (B>A)
    {
        cout<<"B"<<endl;
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