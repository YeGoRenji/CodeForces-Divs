#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'

void solve()
{
	int n,x; cin >> n >> x;
	vector<int> stations(n + 2);
	stations[0] = 0;
	stations[n+2-1] = x;
	for (int i = 0; i < n; ++i)
		cin >> stations[i + 1];
	int m = 0;
	for (int i = 0; i < n; ++i)
		m = max(m, abs(stations[i] - stations[i+1]));
	m = max(m, 2*abs(stations[n] - stations[n+1]));
	cout << m << endl;
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
