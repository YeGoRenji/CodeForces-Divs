// *Click Clack Noises* By YeGo
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'

void solve()
{
	int x, y; cin >> x >> y;
	int screen = 0;
	while (y > 0 || x >  0) {
		// cout << "x = " << x << ", y = " << y << endl;
		screen ++;
		int cells = 5 * 3;
		cells -= 4 * min(2, y);
		y -= min(2, y);
		// cout << "Taking y Cells now " << cells << endl;
		int remainCells = cells;
		cells -= min(remainCells, x);
		// cout << "Taking x Cells now " << cells << endl;
		x -= min(remainCells, x);
	}
	cout << screen << endl;
	// cout << "----------" << endl;
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
