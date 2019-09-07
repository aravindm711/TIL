# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

int n, k;
pair<int, int> a[2005];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	cin >> n >> k;
	// forn(i, n) cin>>a[i], b[i]=a[i];

	// sort(b, b+n);
	// x = b[n-k];
	// cout << x << ln;
	// for(int i=n-1; i>=0; i--)
	// 	if (x<a[i] && cnt<=k)
	// 		cout << i+1 << " ", cnt++;
	// for(int i=0; i<n; i++)
	// 	if (x==a[i] && cnt<=k+1)
	// 		cout << i+1 << " ", cnt++;
	forn(i, n) cin >> a[i].first, a[i].second=i+1;
	sort(a, a+n);

	cout << a[n-k].first << ln;
	for(int i=n-1; i>=n-k; i--)
		cout << a[i].second << " ";

	cout << endl;
	return 0;
}

