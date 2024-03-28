#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'

void solve()
{
	string hour24;
	cin >> hour24;
	int h24 = stoi(hour24.substr(0, 2));
	bool is_pm = h24 >= 12;
	int m = stoi(hour24.substr(3));
	cout << std::setfill('0') << std::setw(2) << (h24 % 12 ?: 12) << ":" 
		 << std::setfill('0') << std::setw(2) << m << (is_pm ? " PM" : " AM") << endl;
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
