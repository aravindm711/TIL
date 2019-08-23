# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

int ans;
string n, m;
map<char, int> mn, mm;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	cin >> n >> m;
	for(auto i: n) mn[i]++;
	for(auto i: m) mm[i]++;

	for(auto i: mm) {
		if (mn[i.first] == 0) return cout << -1 << endl, 0;
		else ans += min(i.second, mn[i.first]);
	} cout << ans;

	cout << endl;
	return 0;
}

