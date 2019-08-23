# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

bool a[1000005], g[1000005];
int diff, n, x, y, suma, sumg;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); 
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	cin >> n;
	forn(i, n) {
		cin >> x >> y;
		suma+=x;
		if (abs(suma-sumg) <= 500) a[i]=1;
		else {
			sumg+=y, suma-=x;
			g[i]=1;
		}
	}
	if (abs(suma-sumg) > 500) cout << -1;
	else {
		forn(i, n) {
			if (a[i]) cout << "A";
			if (g[i]) cout << "G";
		}
	}

	cout << endl;
	return 0;
}

