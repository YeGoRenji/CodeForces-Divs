// *Click Clack Noises* by YeGo
// At 2024-06-03 15:45:33
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
	readVar(int, f);
	readVar(int, k);
	readVect(int, a, n);

	map<int, ll> occ;
	int fav = a[f-1];

	for (auto ai: a) {
		occ[ai]++;
	}

	sort(a.begin(), a.end(), std::greater<int>());

	a.erase(a.begin(), a.begin() + k);

	// cout << "----------------" << endl;
	// cout << "Fav : " << fav << endl;
	// for (auto ai: a) {
	// 	cout << ai << " ";
	// }
	// cout << endl;

	
	if (a.size() == 0) {
		cout << "YES" << endl;
		return;
	}

	if (a.front() > fav) {
		cout << "NO" << endl;
		return;
	}

	if (a.front() == fav) {
		if (occ[fav] == 1) {
			cout << "NO" << endl;
			return;
		}

		int remainingFavs = 0;
		while ((size_t)remainingFavs < a.size() && a[remainingFavs] == fav) {
			remainingFavs++;
		}

		if (remainingFavs == occ[fav]) {
			cout << "NO" << endl;
			return;
		}
		cout << "MAYBE" << endl;
		return;
	}
	
	cout << "YES" << endl;
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
