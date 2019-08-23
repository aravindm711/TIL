# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	long long n, temp;
	cin >> n;

	int m;
	cin >> m;

	vector<long long> numlist;
	forn(i, m) {
		cin >> temp, numlist.push_back(temp);
		if (temp == 1 || temp == n) {
			cout << "NO" << ln;
			return 0;
		}
	}

	sort(numlist.begin(), numlist.end());

	for(int i=1; i<m-1; i++) {
		if (numlist[i]-1 == numlist[i-1] && numlist[i]+1 == numlist[i+1]) {
			cout << "NO" << ln;
			return 0;
		}
	} cout << "YES";

	cout << endl;
	return 0;
}

