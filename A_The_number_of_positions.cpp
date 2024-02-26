#include <bits/stdc++.h>
using namespace std;

void solution()
{

    int n, a, b, c, r;
    cin >> n >> a >> b;
    c = n - a - 1;
    if (c > b)
    {
        r = b + 1;
    }
    else
    {
        r = c + 1;
    }
    cout << r << endl;
}

int main()
{
    // int t;
    // cin >> t;
    // while(t--){
    solution();
    //}
    return 0;
}