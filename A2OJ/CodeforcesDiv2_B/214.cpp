# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

int n, k, arr[100005], sum, minval=1000000000, indx, j;
map<int, int> ans; 

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	cin >> n >> k;
	forn(i, n) cin >> arr[i];

	if(n == 1) return cout << 1, 0;
	if(n == 2) return cout << (arr[0]<=arr[1]?1:2), 0;

	while(j!=n-1) {
		indx++;
		sum = 0;
		for(j=indx-1; j<n; j+=k) sum+=arr[j];
		minval = min(sum, minval);
		if (ans[minval] == 0) ans[minval]=indx;
		j-=k;
	}
	cout << ans[minval];

	cout << endl;
	return 0;
}

