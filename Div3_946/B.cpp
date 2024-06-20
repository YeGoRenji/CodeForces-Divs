// *Click Clack Noises* By YeGo
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'

void solve()
{
	long n; cin >> n;
	string s; cin >> s;
	map<char, int> occ;
	for (auto c : s)
		occ[c]++;
	int auxSize = occ.size();
	vector<char> aux(auxSize);

	int i = 0;
	for (auto &[key, _] : occ)
		aux[i++] = key;

	map<char, char> sym;
	for (int i = 0; i < auxSize; ++i)
		sym[aux[i]] = aux[auxSize - i - 1];

	for (auto c : s)
		cout << sym[c];
	cout << endl;
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
