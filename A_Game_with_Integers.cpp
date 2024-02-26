#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void yes() { cout << "First" << endl; }
void no() { cout << "Second" << endl; }
void solution()
{
    int n;
    cin >> n;
    if (n % 3 == 0)
    {
        no();
    }
    else
    {
        yes();
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