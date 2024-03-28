#include <bits/stdc++.h>
#include <bitset>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'

bool is_bin(int n)
{
	while (n != 0)
	{
		if (n % 10 > 1)
			return false;
		n /= 10;
	}
	return (true);
}

size_t get_len(int n)
{
	if (n == 0)
		return (1);
	size_t len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return len;
}

bool is_mult_bin(int n)
{
	if (is_bin(n))
		return (true);
	if (n < 10)
		return (false);
	const int n_co = n;

	// repr = 101101
	// raw = 123

	int binRepr = 10;
	while (binRepr < n_co)
	{
		int binRaw = stoi(to_string(binRepr), 0, 2);
		if (n % binRepr == 0)
			return is_mult_bin(n / binRepr);
		binRepr = stoi(std::bitset<64>(binRaw + 1).to_string(), 0, 10);
	}
	return (false);
}

void solve()
{
	int n; cin >> n;
	cout << (is_mult_bin(n) ? "YES" : "NO") << endl;
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
