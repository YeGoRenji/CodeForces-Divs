#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'

bool	is_palindrome(map<char, int> &occ, int len)
{
	// TODO: test if palindrome
	return false;
}

void solve(string &s, int len, int to_delete)
{
	map<char, int> occ;
	for (char c: s)
		occ[c]++;
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
		solve(str, n, k);
	}
	return 0;
}
