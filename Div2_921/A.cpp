#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'
void solve()
{
	int n, k; cin >> n >> k;
	string s;

	for (int j = 0; j < k; ++j)
		s += 'a' + j;

	for (int i = 0; i < n; ++i)
		cout << s;

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
