#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'

void solve()
{
	int n; cin >> n;
	vector<int> count(n);
	int pts = 0;
	for (int i = 0; i < n; ++i)
	{
		int x; cin >> x;
		if (count[x - 1])
			pts++;
		count[x - 1]++;
	}
	cout << pts << endl;
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
