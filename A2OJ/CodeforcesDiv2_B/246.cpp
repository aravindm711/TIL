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

	int n;
	cin >> n;

	int x, y;
	vector<pair<int, int> > numlist;
	map<int, int> countlist;
	forn(i, n)
		cin >> x >> y, numlist.push_back(make_pair(x, y)), countlist[x]++;

	forn(i, n) {
		int home=0;
		home += n-1 + countlist[numlist[i].second];

		cout << home << " " << ((2*(n-1))-home) << ln;
	}

	cout << endl;
	return 0;
}

