#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'

void debugGrid(vector<vector<char> > &grid, int n, int m) {
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
			cout << grid[i][j];
		cout << endl;
	}
	cout << endl;
}

void solve()
{
	int n, m; cin >> n >> m;

	vector<vector<char> > grid(n, vector<char>(m));

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin >> grid[i][j];
	debugGrid(grid, n, m);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}
