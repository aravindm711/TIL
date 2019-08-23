# include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	string s, t;
	cin >> s >> t;

	int count=0;
	for(auto i: s)
		if (i == t[count])
			count++;
	if (count == t.length())
		return cout << "automaton", 0;

	sort(s.begin(), s.end()), sort(t.begin(), t.end());
	if (s == t)
		return cout << "array", 0;

	count = 0;
	for(auto i: s)
		if (i == t[count])
			count++;
	if (count == t.length())
		return cout << "both", 0;

	cout << "need tree";

	cout << endl;
	return 0;
}