#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'

void solve()
{
	string pos; cin >> pos;

	for (char c = 'a'; c <= 'h'; ++c)
		if (pos[0] != c)
			cout << c << pos[1] << endl;
	for (char p = '1'; p <= '8'; ++p)
		if (pos[1] != p)
			cout << pos[0] << p << endl;
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
