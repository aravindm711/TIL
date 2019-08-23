# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

int nums[10005], n, m, d, x, ans;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	cin >> n >> m >> d;
	forn(i, n*m) {
		cin >> nums[i];
		if (i==0) x=nums[0]%d;
		else if (nums[i]%d != x) return cout << -1 << endl, 0;
	}
	sort(nums, nums+n*m);
	x=nums[(n*m/2)];
	for(int i=0; i<n*m; i++)
		ans += abs(x-nums[i]);
	cout << ans/d;

	cout << endl;
	return 0;
}

