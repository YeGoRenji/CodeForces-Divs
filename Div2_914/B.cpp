#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'
#define REP(i,n) for (int i = 0; i < n; ++i)
#define all(vec) vec.begin(), vec.end()

bool sortbysec(const pair<int,int> &a,
               const pair<int,int> &b)
{
    return (a.second < b.second);
}

void solve()
{
	int n; cin >> n;


	vector<int> res(n);
	vector<pair<int,int>> vec(n);

	REP(i,n) {
		vec[i].first = i;
		cin >> vec[i].second;
	}

	for (auto [idx, val]: vec)
	{
	}
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
