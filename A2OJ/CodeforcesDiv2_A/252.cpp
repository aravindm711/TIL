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

	int k, v, temp, n;
	cin >> k >> v;

	std::set<int> ans;
	for(int i=0; i<k; i++) {
		cin >> n;
		while(n--) {
			cin >> temp;
			if (temp < v) ans.insert(i+1);
		}
	}

	if (ans.size() != 0) { 
		cout << ans.size() << ln;
		for(auto i: ans) cout << i << " ";
	} else cout << 0;

	cout << endl;
	return 0;
}

