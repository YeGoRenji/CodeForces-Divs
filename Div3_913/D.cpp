#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'

void solve()
{
	int n; cin >> n;
	vector<pair<int,int>> segments(n);

	for (int i = 0; i < n; ++i)
		cin >> segments[i].first >> segments[i].second;

	int prev_li = segments[0].first;
	int prev_ri = segments[0].second;
	int minDist = prev_li;

	for (auto [li, ri]: segments)
	{
		if (li == prev_li && ri == prev_ri)
			continue;
		if (li > prev_li)
			minDist = max(minDist, li - prev_li);
		else if (ri < prev_li)
			minDist = max(minDist, prev_li - ri);
		prev_li = li;
		prev_ri = ri;
	}
	cout << minDist << endl;
}

int main()
{
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
