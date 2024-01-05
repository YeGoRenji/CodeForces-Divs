#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'

void solve()
{
	int a, b; cin >> a >> b;
	int x_k, y_k; cin >> x_k >> y_k;
	int x_q, y_q; cin >> x_q >> y_q;

	vector<pair<int, int>> vecAB = {
		{x_k - a,y_k - b},
		{x_k + a,y_k - b},
		{x_k - a,y_k + b},
		{x_k + a,y_k + b}
	};

	const int dist = abs(a) + abs(b);

	int nb_pos = 0;

	for (auto [x, y]: vecAB)
		if (x_q != x && y_q != y && abs(x_q - x) + abs(y_q - y) == dist)
			nb_pos++;

	vector<pair<int, int>> vecBA = {
		{x_k - b,y_k - a},
		{x_k + b,y_k - a},
		{x_k - b,y_k + a},
		{x_k + b,y_k + a}
	};

	if (b != a)
		for (auto [x, y]: vecBA)
			if (x_q != x && y_q != y && abs(x_q - x) + abs(y_q - y) == dist)
				nb_pos++;

	cout << nb_pos << endl;
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
