#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'

void solve()
{
	int n; cin >> n;
	vector<int> a(2*n);
	int i = 0;
	while (i < 2*n)
		cin >> a[i++];
	sort(a.begin(), a.end());
	vector<pair<int, int>> pairs(n);
	for (int i = 0; i < n; ++i)
		pairs[i].first = a[i];
	for (int i = n; i < 2*n; ++i)
		pairs[i - n].second = a[i];
	int distance = 0;
	for (int i = 0; i < n - 1; ++i)
	{
		distance += abs(pairs[i].first - pairs[i+1].first)
				 + abs(pairs[i].second - pairs[i+1].second);
	}
	cout << distance << endl;
	for (auto p: pairs)
		cout << p.first << " " << p.second << endl;
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
