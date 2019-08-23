# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

# define S 101
int a[S][S], b[S][S];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int m, n;
	cin >> m >> n;

	forn(i, m) forn(j, n) cin >> a[i][j], b[i][j]=1;

	forn(i, m) {
		forn(j, n) {
			if (!a[i][j]) {
				forn(x, n) b[i][x] = 0;
				forn(x, m) b[x][j] = 0;
			}
		}
	}

	forn(i, m) {
		forn(j, n) {
			int t=0;
			forn(x, n) t |= b[i][x];
			forn(x, m) t |= b[x][j];
			if (t != a[i][j]) {
				cout << "NO" << ln;
				return 0;
			}
		}
	}

	cout << "YES" << ln;
	forn(i, m) {
		forn(j, n) {
			cout << b[i][j] << " ";
		} cout << ln;
	}

	cout << endl;
	return 0;
}

