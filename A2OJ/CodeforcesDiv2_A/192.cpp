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

	int r, c, ans=0;
	cin >> r >> c;

	string inp[r];
	for(int i=0; i<r; i++) {
		cin >> inp[i];
		if (inp[i].find('S') == inp[i].npos) ans += c;
	}

	int temp=0, count=0;
	for(int i=0; i<c; i++) {
		for(int j=0; j<r; j++)
			if (inp[j][i] == '.') count++;
		if (count == r) temp += (r - (ans/c));
		count = 0;
	}

	cout << (ans + temp);

	cout << endl;
	return 0;
}

