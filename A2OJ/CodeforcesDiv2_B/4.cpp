# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

int d, s, x, y, maxsum, minsum;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	cin >> d >> s;

	vector<pair<int, int> > v;
	forn(i, d) {
		cin >> x >> y, v.push_back(make_pair(y, x));
		maxsum += y;
		minsum += x;
	}
	if (maxsum < s || minsum > s) return cout << "NO" << ln, 0;
	cout << "YES" << ln;
	for(int i=0; i<v.size(); i++) {
		x=v[i].second, y=v[i].first;
		v[i].second += min(s-minsum, y-x);
		minsum += min(s-minsum, y-x);
		cout << v[i].second << " ";
	}

	cout << endl;
	return 0;
}

