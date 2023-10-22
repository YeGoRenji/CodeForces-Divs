#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'

int solve(int &n, int &m, const char *x, const char *s)
{
	for (int i = 0; i < n; i++)
	{

		// x = eforc
		// 	   ^
		//
		// s = force\0
		// 	        ^

		if (x[i] == s[0])
		{
			int j = i;
			int k = 0;
			int cycles = 1;
			while (x[j % n] == s[k])
			{
				j++;
				if (j % n == 0)
					cycles++;
				k++;
			}
			if (s[k] == '\0')
				return (cycles);
		}
	}
	return (-1);
}

int inv_geom(int sum_geom, int q)
{
	int n = 1;

	int i = 0;
	while (n < sum_geom)
	{
		n += 2 * n;
		i++;
	}
	return (i);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int m; cin >> m;
		string x; cin >> x;
		string s; cin >> s;
		int geom = solve(n, m, x.c_str(), s.c_str());
		if (geom == -1)
			cout << geom << endl;
		else
			cout << inv_geom(geom, n) << endl;
	}
	return 0;
}
