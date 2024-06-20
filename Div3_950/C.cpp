// *Click Clack Noises* by YeGo
// At 2024-06-03 16:33:39
// Wrong answer on test 69 incoming...
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'
#define readVar(_type, _name) _type _name; cin >> _name;
#define readVect(_type, _name, _size) vector<_type> _name(_size); for (auto &_xi: _name) cin >> _xi;
#define F0R(_i, _n) for (size_t _i = 0; i < (size_t)(n); ++i)
#define C0NTAINS(_vec, _elt) (find(_vec.begin(), _vec.end(), _elt) != a.end())

void solve()
{
	readVar(int, n);
	readVect(int, a, n);
	readVect(int, b, n);
	readVar(int, m);
	readVect(int, d, m);

	// cout << "----------------" << endl;

	// cout << "inA : ";
	// for (auto xi: inA) {
	// 	cout << xi << " ";
	// }
	// cout << endl;

	// cout << "inB : ";
	// for (auto xi: inB) {
	// 	cout << xi << " ";
	// }
	// cout << endl;

	// cout << "inBetween : ";
	// for (auto xi: inBetween) {
	// 	cout << xi << " ";
	// }

	for (int j = 0; j < m; ++j) {
		auto it = find(b.begin(), b.end(), d[j]);
		if (it != b.end()) {
			int idx = (it - b.begin());
			a[idx] = d[j];
		} else {
			int i;
			for (i = 0; i < n; ++i) {
				if (a[i] == d[j] || a[i] != b[i]) {
					a[i] = d[j];
					break;
				}
			}
			// if (i >= n) {
			// 	// cout << "YIKIES" << endl;
			// 	for (int k = 0; k < n; ++k) {
			// 		auto ffound = find(d.begin() + j + 1, d.end(), b[k]);
			// 		if (ffound != d.end()) {
			// 			a[k] = d[j];
			// 			// cout << "YE" << endl;
			// 			continue;
			// 		}
			// 	}
			// 	cout << "NO" << endl;
			// 	return ;
			// 	// remains.push_back(d[j]);
			// }
		}
	}

	// if (!remains.empty()) {
	// 	cout << "NO" << endl;
	// 	return;
	// }

	for (int i = 0; i < n; ++i) {
		if (a[i] != b[i]) {
			cout << "NO" << endl;
			return;
		}
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
