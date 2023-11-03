#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'
void solve()
{
	int chest, key, lift; cin >> chest >> key >> lift;
	if (chest > key)
	{
		cout << chest << endl;
		return ;
	}
	cout << key + max(0, key - (chest + lift)) << endl;
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
