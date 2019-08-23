# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

int n, x, cnt, maxval;
int arr[1005];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	cin >> n;
	forn(i, n) cin >> arr[i];

	forn(i, n) {
		cnt=1;
		x = arr[i];
		for(int j=i-1; j>=0; j--) {
			if (arr[j]==x) cnt++;
			else if (arr[j] < x) x = arr[j], cnt++;
			else break;
		}
		x = arr[i];
		for(int j=i+1; j<n; j++) {
			if (arr[j]==x) cnt++;
			else if (arr[j] < x) x = arr[j], cnt++;
			else break;
		}
		maxval = max(maxval, cnt);
	}
	cout << maxval;

	cout << endl;
	return 0;
}



