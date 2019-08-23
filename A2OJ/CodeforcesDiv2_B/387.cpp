# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

int listn[3005], listm[3005];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int n, m, temp;
	cin >> n >> m;

	// set<int> setn, setm, diff;
	// forn(i, n) cin >> temp, setn.insert(temp);
	// forn(i, m) cin >> temp, setm.insert(temp);

	// set_difference(setn.begin(), setn.end(), setm.begin(), setm.end(), inserter(diff, diff.begin()));

	// if (!diff.size()) {
	// 	cout << 0 << endl;
	// 	return 0;
	// }

	// int cnt=0;
	// auto itm=setm.begin();
	// for(auto itn: diff) {
	// 	for(; itm!=setm.end(); itm++) {
	// 		if (itn < *itm) {
	// 			cnt++;
	// 			itm++;
	// 			break;
	// 		}
	// 	} if (itm == setm.end()) break;
	// }

	// cout << (diff.size() - cnt);

	forn(i, n) cin >> listn[i];
	forn(i, m) cin >> listm[i];

	for(int i=min(m, n); i>=0; i--) {
		bool ok=true;

		forn(j, i) {
			if (listn[j] > listm[m - i + j]) {
				ok = false;
				break;
			}
		}
		if (ok) {
			cout << (n-i);
			break;
		}
	}

	cout << endl;
	return 0;
}

