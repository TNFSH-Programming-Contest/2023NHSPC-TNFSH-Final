#include <bits/stdc++.h>
using namespace std;

string reflect(string s)
{
	for (auto &c : s)
		if (c == 'b' || c == 'q')
			c ^= ('b' ^ 'q');
		else
			c ^= ('d' ^ 'p');
	return s;
}

string rotate(string s)
{
	for (auto &c : s)
		if (c == 'b' || c == 'p')
			c ^= ('b' ^ 'p');
		else
			c ^= ('d' ^ 'q');
	reverse(s.begin(), s.end());
	return s;
}

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		string s, t;
		cin >> s >> t;
		if (s == t)
			cout << "Yes\n";
		else if (reflect(s) == t)
			cout << "Yes\n";
		else if (rotate(s) == t)
			cout << "Yes\n";
		else if (reflect(rotate(s)) == t)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}
