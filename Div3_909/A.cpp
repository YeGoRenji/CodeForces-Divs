#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'
void solve()
{
	int n; cin >> n;
	cout << (n % 3 == 0 ? "Second" : "First") << endl;
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
