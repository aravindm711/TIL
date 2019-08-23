# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

int arr[100005];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int n;
	cin >> n;

	if (n < 3) return cout << n << ln, 0;

	int cnt=0;
	vector<int> cntlist;
	forn(i, n) {
		cin >> arr[i];

		if (i > 1) {
			if (arr[i] == arr[i-1] + arr[i-2]) {
				cnt++;
			} else {
				cntlist.push_back(cnt);
				cnt=0;
			}
			if (i == n-1) cntlist.push_back(cnt);
		}
	}

	// if (cntlist.size() == 0) return cout << 0 << ln, 0;

	cout << (*max_element(cntlist.begin(), cntlist.end()) + 2);

	cout << endl;
	return 0;
}

