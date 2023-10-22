#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'

int	number_of_odd_occ(map<char, int> &occ) {
	int number = 0;
	for (auto p: occ)
		if (p.second % 2)
			number++;
	return (number);
}

bool solve(string &s, int len, int to_delete) {
	map<char, int> occ;
	for (char c: s)
		occ[c]++;
	int odd_occs = number_of_odd_occ(occ);
	return (odd_occs <= to_delete + 1);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		int n, k; cin >> n >> k;
		string str; cin >> str;
		cout << (solve(str, n, k) ? "YES" : "NO") << endl;
	}
	return 0;
}
