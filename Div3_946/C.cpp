// *Click Clack Noises* By YeGo
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'

void solve()
{
	int n; cin >> n;

	vector<int> a(n);
	for (auto &ai : a) cin >> ai;

	vector<int> triples(n - 2);
	for (int j = 0; j < n - 2; ++j)
		triples[j] = a[j] * 100 + a[j + 1] * 10 + a[j + 2];
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
