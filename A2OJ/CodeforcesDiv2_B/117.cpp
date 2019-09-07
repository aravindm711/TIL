# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

int d, n, x, ans, p;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	// cin >> d >> n;
	// forn(i, n) {
	// 	cin >> x;
	// 	if (i)
	// 		if (p!=1)
	// 			ans+=d-p+1;
	// 	if (x==d) p=1;
	// 	else p=x+1;
	// }
	// cout << ans;

	for(cin>>d>>n; n--; n?ans+=d-x:0)
		cin>>x;
	cout << ans;

	cout << endl;
	return 0;
}

