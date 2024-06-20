#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'

void solve()
{
	int n; cin >> n;
	int sum = n * (n + 1) * ((double)(2 * n+1)/3 - 0.5);
	int operations = n + n - 1;
	string s;
	for (int i = 1; i <= n; ++i) {
		(s += ' ') += to_string(i);
	}
	cout << sum << ' ' << operations << endl;
	for (int i = 1; i <= n; ++i) {
		cout << "1 " << i << s << endl;
	}
	for (int i = 1; i <= n - 1; ++i) {
		cout << "2 " << i << s << endl;
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
