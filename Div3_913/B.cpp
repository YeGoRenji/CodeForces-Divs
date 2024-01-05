#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define endl '\n'

void solve()
{
	string keystrokes; cin >> keystrokes;

	stack<int> lowerCasePoses;
	stack<int> upperCasePoses;
	string constructed;

	int i = 0;
	for (auto c: keystrokes)
	{
		if (c == 'b' || c == 'B')
		{
			int posToRemove = -1;
			if (c == 'b' && !lowerCasePoses.empty())
			{
				posToRemove = lowerCasePoses.top();
				lowerCasePoses.pop();
			}
			else if (c == 'B' && !upperCasePoses.empty())
			{
				
				posToRemove = upperCasePoses.top();
				upperCasePoses.pop();
			}
			if (posToRemove != -1)
				constructed[posToRemove] = ' ';
			continue;
		}
		if (islower(c))
			lowerCasePoses.push(i);
		else
			upperCasePoses.push(i);
		constructed.push_back(c);
		i++;
	}

	for (auto c: constructed)
		if (c != ' ')
			cout << c;
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
