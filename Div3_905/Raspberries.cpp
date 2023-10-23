#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'

void solve()
{
	int	n, k; cin >> n >> k;
	int closest_to_k = -1;
	vector<int> a(n);
	ll product = 1;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		product = (product * a[i]) % k;
	}
	if (product % k == 0)
	{
		cout << "0\n";
		return;
	}
	for (int i = 0; i < n; ++i)
	{
		if (a[i] % k > closest_to_k)
			closest_to_k = a[i] % k;
	}
	int result = k - closest_to_k;
	cout << result - (k == 4 && result > 1) * 1 << endl;
}

// (a + 2)^2 = a^2 + 4a + 4

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
