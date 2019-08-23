# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int n, temp;
	cin >> n;

	string ans;
	vector<int> first, second;
	long long sumfirst=0, sumsecond=0;
	forn(i, n) {
		cin >> temp;
		if (temp > 0) {
			first.push_back(temp);
			sumfirst += temp;
		} else {
			second.push_back(-(temp));
			sumsecond += -(temp);
		}

		if (i==n-1) {
			if (temp > 1) ans="first";
			else ans="second";
		}
	}

	if (sumsecond != sumfirst) {
		cout << (sumfirst > sumsecond ? "first" : "second");
	} else {
		int min=(first.size() > second.size() ? second.size() : first.size()), r=0;
		forn(i, min)
			if (first[i] == second[i]) r++;

		if (r == min && first.size() != second.size())
			cout << (min == first.size() ? "second" : "first");
		else if (r < min)
			cout << (first[r] > second[r] ? "first" : "second");
		else
			cout << ans;
	}

	cout << endl;
	return 0;
}

