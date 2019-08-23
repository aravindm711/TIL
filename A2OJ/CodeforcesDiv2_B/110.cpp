# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

double arr[105], sum;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int n;
	cin >> n;

	forn(i, n) cin >> arr[i];
	sort(arr, arr+n);

	for(int i=n-1; i>=0; i-=2) {
		if (i-1 >= 0) {
			sum += (arr[i]*arr[i] - arr[i-1]*arr[i-1]);
		} else {
			sum += arr[i]*arr[i];
		}
	}
	printf("%.10lf", sum*3.14159265358979323846);

	cout << endl;
	return 0;
}

