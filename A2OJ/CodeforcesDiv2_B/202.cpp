# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

int k, a[10], minv=1e9, indx, rem, cnt;
string ans;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	cin >> k;
	forn(i, 9) {
		cin >> a[i];
		minv = min(minv, a[i]);
	}

	cnt=k/minv;
	if(!cnt)
		cout << -1;

	while(cnt--) {
		for(int i=8; i>=0; i++) {
			if ((k-a[i])/minv == cnt && k>=a[i]) {
				cout << i+1;
				k-=a[i];
				break;
			}
		}
	}

	// forn(i, k/a[indx]) ans+=indx+48;
	// k%=maxv;

	// forn(i, ans.length()) {
	// 	rforsn(j, 9, indx) {
	// 		if (k - a[j] + a[ans[i]-48] >= 0) {
	// 			k = k - a[j] + a[ans[i]-48];
	// 			ans[i] = j+48;
	// 			break;
	// 		}
	// 	}
	// }
	// if (!(ans.length()))
	// 	cout << -1;
	// else
	// 	cout << ans;

	cout << endl;
	return 0;
}
