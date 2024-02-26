#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void yes() { cout << "YES" << endl; }
void no() { cout << "NO" << endl; }
void solution()
{
	ll n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	for (ll i = 0; i < n; i++)
	{
		if (s[i] == 'B')
		{
			k--;
		}
	}
	if (k == 0)
	{
		cout << 0 << endl;
	}
	else
	{
		cout << 1 << endl;
		char c;
		if (k < 0)
		{
			c = 'A';
		}
		else
		{
			c = 'B';
		}
		k = abs(k);
		for (ll i = 0; i < n; i++)
		{
			if (s[i] != c)
			{
				k--;
			}
			if (k == 0)
			{
				cout << i + 1 << " ";
				break;
			}
		}
		cout << c << endl;
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