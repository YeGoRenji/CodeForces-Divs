#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'

void solve()
{
	int n; cin >> n;
	for (int i = 0; i < 2*n; ++i)
	{
		for (int j = 0; j < 2*n; ++j)
			cout << (!((i/2 + j/2) % 2) ?'#' : '.');
		cout << endl;
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
