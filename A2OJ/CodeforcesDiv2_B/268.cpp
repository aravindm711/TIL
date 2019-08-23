# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

bool z[2002];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int p, q, l, r;
	cin >> p >> q >> l >> r;

	int a, b;
	forn(i, p) {
		cin >> a >> b;
		for(int j=a; j<=b; j++) z[j] = true;
	}

	vector<pair<int, int> > x;
	forn(i, q)
		cin >> a >> b, x.push_back(make_pair(a, b));

	int ans=0;
	for(int i=l; i<=r; i++) {
		forn(j, x.size()) {
			int flag=0;
			for(int k=x[j].first+i; k<=x[j].second+i; k++) {
				if (z[k]) {
					ans++;
					flag=1;
					break;
				}
			} if (flag) break;
		}
	} cout << ans;

	cout << endl;
	return 0;
}

