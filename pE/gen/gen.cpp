#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;

string gen_string(int l)
{
	string s = rnd.next("[bdpq]{10}");
	s.resize(l);
	return s;
}

string bad_reflect(string s)
{
	for (auto &c : s)
		if (c == 'b' || c == 'q')
			c ^= ('b' ^ 'q');
		else
			c ^= ('d' ^ 'p');
	return s;
}

string reflect(string s)
{
	for (auto &c : s)
		if (c == 'b' || c == 'p')
			c ^= ('b' ^ 'p');
		else
			c ^= ('d' ^ 'q');
	return s;
}

string bad_rotate(string s)
{
	for (auto &c : s)
		if (c == 'b' || c == 'p')
			c ^= ('b' ^ 'p');
		else
			c ^= ('d' ^ 'q');
	reverse(s.begin(), s.end());
	return s;
}

string rotate(string s)
{
	for (auto &c : s)
		if (c == 'b' || c == 'q')
			c ^= ('b' ^ 'q');
		else
			c ^= ('d' ^ 'p');
	reverse(s.begin(), s.end());
	return s;
}

int main(int argc, char *argv[])
{
	registerGen(argc, argv, 1);
	int T = atoi(argv[1]), L = atoi(argv[2]);
	cout << T << '\n';
	for (int i = 1; i <= T; i++)
	{
		int mode = rnd.next(0, 9);
		if (mode == 9)
		{
			cout << gen_string(rnd.next(1, L)) << '\n';
			cout << gen_string(rnd.next(1, L)) << '\n';
		}
		else
		{
			int l = ceil(sqrt(rnd.next(1, L * L)));
			string s = gen_string(l), t = s;
			if (mode / 3 == 1)
				t = bad_rotate(s);
			if (mode / 3 == 2)
				t = rotate(s);
			if (mode % 3 == 1)
				t = reflect(s);
			if (mode % 3 == 2)
				t = bad_reflect(s);
			cout << s << '\n'
				 << t << '\n';
		}
	}
	return 0;
}
