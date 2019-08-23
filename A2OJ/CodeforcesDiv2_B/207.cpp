# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

int n, m;
int arr[300005], check[3]={1,2,3};
map<int, int> mp;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	cin >> n >> m;
	forn(i, 3*m) cin >> arr[i];
	for(int i=0; i<3*m; i+=3) {
		forn(j, 3) {
			if (mp[arr[i+j]] && check[j] != mp[arr[i+j]])
				mp[arr[i+mp[arr[i+j]]-1]] = check[j];
			else if (!mp[arr[i+j]])
				mp[arr[i+j]] = check[j];
		}
	}

	for(auto i: mp) cout << i.second << " ";

	cout << endl;
	return 0;
}

