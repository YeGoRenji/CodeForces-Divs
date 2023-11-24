#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'

void solve()
{
	int n; cin >> n;
	vector<int> numbs(n);
	for (int i = 0; i < n; ++i)
		cin >> numbs[i];
	int minNumb = numbs[n - 1] - 1;
	map<int, int> m;
	for (int i = 1; i < n - 1; ++i)
		m[numbs[i]] = 1;
	minNumb += m.size();
	cout << minNumb << endl;
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
