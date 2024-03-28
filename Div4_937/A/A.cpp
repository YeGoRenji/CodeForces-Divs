#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'

void solve()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a < b && b < c)
		cout << "STAIR" << endl;
	else if (a < b && b > c)
		cout << "PEAK" << endl;
	else
		cout << "NONE" << endl;
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
