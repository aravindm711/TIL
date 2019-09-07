# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

int n, k, a[100005], pos, cnt;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	cin >> n >> k;
	if (k==n)
		return cout<<-1, 0;

	// forn(i, n) a[i]=i+1;
	// cnt=n-1;
	// pos=1;
	// while(cnt-k>0) {
	// 	if ((cnt-k)&1 && a[0]==1) {
	// 		swap(a[0], a[pos]);
	// 		pos++;
	// 		cnt--;
	// 	}
	// 	else if ((cnt-k)&1 && a[0]!=1) {
	// 		return cout << -1, 0;
	// 	}
	// 	else {
	// 		swap(a[pos], a[pos+1]);
	// 		pos+=2;
	// 		cnt-=2;
	// 	}
	// }
	// if (!(cnt-k))
	// 	forn(i, n) cout << a[i] << " ";
	// else
	// 	cout << -1;


	// Beautiful implementation
	cout << n-k << " ";
	forsn(i, 1, n+1)
		if (i!=n-k)
			cout << i << " ";

	cout << endl;
	return 0;
}

