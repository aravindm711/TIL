# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

int arr[101], colors[101];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int n, k;
	cin >> n >> k;

	int max=0, min=102;
	forn(i, n) {
		cin >> arr[i];
		if (arr[i] > max) max=arr[i];
		if (arr[i] < min) min=arr[i];
	}

	if (max-min > k) {
		cout << "NO";
	} else {
		forn(i, k) colors[i]=i+1;

		cout << "YES" << ln;
		for(int i=0; i<n; i++) {
			int index=1;
			for(int j=0; j<arr[i]; j++) {
				if (j <= min) cout << 1 << " ";
				else { cout << colors[index] << " "; index++; }
			} cout << ln;
		}
	}

	cout << endl;
	return 0;
}

