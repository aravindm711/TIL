# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

int n, x, y, cnt, f1, f2, temp;
int arrx[1005], arry[1005];
map<pair<int, int>, bool> arr;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	cin >> n >> x >> y;
	if (n == 1) return cout << 1, 0;
	forn(i, n) {
		cin >> arrx[i] >> arry[i];
		if (arrx[i] == x) {f1=1; continue;}
		if (arry[i] == y) {f2=1; continue;}
		arr[make_pair(arrx[i], arry[i])] = true;
	}
	cnt += f1 + f2;

	forn(i, n) {
		if (arr[make_pair(arrx[i], arry[i])]) {
			f1=0;
			forn(j, n) {
				if (arr[make_pair(arrx[j], arry[j])]) {
					if ((arry[i]-y)*(arrx[j]-x) == (arry[j]-y)*(arrx[i]-x)) {
						f1=1;
						arr[make_pair(arrx[j], arry[j])] = false;
					}
				}
			}
			cnt += f1;
		}
	}
	cout << cnt;

	cout << endl;
	return 0;
}

