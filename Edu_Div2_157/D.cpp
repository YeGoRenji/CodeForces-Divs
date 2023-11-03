#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'

void solve()
{
	int n; cin >> n;
	vector<int> a(n-1);
	int i = 0;
	while (i < n - 1)
		cin >> a[i++];
	vector<int> b(n);
	b[0] = 0;
	cout << b[0] << " ";
	for (int i = 0; i < n - 1; ++i)
	{
		b[i + 1] = b[i] ^ a[i];
		cout << b[i+1] << " ";
	}
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
	return 0;
}
