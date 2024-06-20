#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'

int solve_for_n(vector<int> &to_kick, int n) {
	return min(n, *min(to_kick.begin(), to_kick.end()) - 1);
}

void solve()
{
	int k,q; cin >> k >> q;
	vector<int> a(k), n(q);
	for (int i = 0; i < k; ++i)
		cin >> a[i];
	for (int i = 0; i < q; ++i)
		cin >> n[i];
	for (int i = 0; i < q; ++i)
		cout << solve_for_n(a, n[i]) << ' ';
	cout << endl;
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
