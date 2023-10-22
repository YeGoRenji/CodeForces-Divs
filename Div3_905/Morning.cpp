#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'
#define uint unsigned int

uint go_click(uint8_t &cursor, int digit)
{
	uint8_t	old_cursor = cursor;
	if (digit == cursor)
		return (1);
	if (cursor == 0)
		old_cursor = 10;
	if (digit == 0)
		digit = 10;
	cursor = digit == 10 ? 0 : digit;
	return (abs(digit - old_cursor) + 1);
}

void solve(string pin)
{
	uint8_t	cursor = 1;
	uint	secs = 0;
	for (auto c : pin) 
		secs += go_click(cursor, c - '0');
	cout << secs << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int		t;
	string	pin;
	cin >> t;
	while(t--)
	{
		cin >> pin;
		solve(pin);
	}
	return 0;
}
