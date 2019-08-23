# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

int moves=1, pts, n, x, y;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	cin >> n;
	vector<int> v;
	forn(i, n) {
		cin >> x >> y;
		if (y == 0) v.push_back(x);
		else {
			pts += x;
			moves += y-1;
		}
	}
	sort(v.rbegin(), v.rend());
	pts += accumulate(v.begin(), (v.size()<=moves ? v.end(): v.begin()+moves), 0);

	cout << pts;

	cout << endl;
	return 0;
}

