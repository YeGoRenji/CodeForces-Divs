#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'

void solve()
{
	int n; cin >> n;
	vector<int> lengths(n);
	map<int, int> occ;
	for (int i = 0; i < n; ++i)
	{
		cin >> lengths[i];
		occ[lengths[i]]++;
	}
	if (n < 3) {
		cout << "0" << endl;
		return;
	}
	int max = 0;
	for (auto &[key, val]: occ) {
		max += val / 3;
	}
	cout << max << endl;
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
