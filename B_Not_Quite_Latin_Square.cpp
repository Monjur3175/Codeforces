#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }
void solution()
{
    char a, b, c;
    cin >> a >> b >> c;
    if (a == 63)
        printf("%c\n", 198 - b - c);
    if (b == 63)
        printf("%c\n", 198 - a - c);
    if (c == 63)
        printf("%c\n", 198 - b - a);
}

int main()
{
    ll t;
    cin >> t;
    t = 3 * t;
    while (t--)
    {
        solution();
    }
    return 0;
}