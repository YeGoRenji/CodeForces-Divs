// *Click Clack Noises* by YeGo
// At 2024-06-03 15:38:36
// Wrong answer on test 69 incoming...
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'
#define readVar(_type, _name) _type _name; cin >> _name;
#define readVect(_type, _name, _size) vector<_type> _name(_size); for (auto &_xi: _name) cin >> _xi;
#define F0R(_i, _n) for (size_t _i = 0; i < (size_t)(n); ++i)

void solve()
{
	readVar(int, n);
	readVar(int, m);
	readVar(string, bank);

	map<char, ll> occ;

	for (int i = 'A'; i <= 'G'; ++ i) {
		occ[i] = 0;
	}

	for (auto c: bank)
		occ[c]++;

	ll result = 0;
	for (auto &[_, val]: occ) {
		val -= m;
		if (val < 0) {
			result += abs(val);
		}
	}
	cout << result << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t = 1;
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}
