#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'

ll nb_cards(map<int, int> &occ)
{
	ll sum = 0;
	for (auto &[_, oc]: occ)
		sum += oc;
	return (sum);
}

pair<int, int> max_el(map<int, int> &occ) {
	pair<int, int> max_now(0, -1);

	for (auto &it: occ) {
		if (it.second > max_now.second) {
			max_now = it;
		}
	}
	return (max_now);
}

void solve()
{
	map<int, int> occ;
	int n, k; cin >> n >> k;

	for (int i = 0; i < n; ++i) {
		int nb; cin >> nb;
		occ[nb]++;
	}
	bool found = true;
	while (found) {
		found = false;
		for (auto &it: occ) {
			if (it.second >= k) {
				found = true;
				it.second = it.second - k;
				// cout << "Found" << it.first << endl;
				occ[max_el(occ).first] = occ[max_el(occ).first] + k - 1;
				// cout << "Put in " << max_el(occ).first << endl << endl;
			}
		}
	}
	cout << nb_cards(occ) << endl;
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
