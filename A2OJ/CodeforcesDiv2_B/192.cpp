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

	int n, m;
	cin >> n >> m;

	int x, y;
	set<int> s;
	forn(i, m) cin >> x >> y, s.insert(x), s.insert(y);

	int ans;
	forn(i, n) {
		if (s.find(i+1) == s.end()) {
			ans = i+1;
			break;
		}
	}

	cout << n-1 << ln;
	for(int i=1; i<=n; i++)
		if (i != ans) cout << ans << " " << i << ln;

	cout << endl;
	return 0;
}

