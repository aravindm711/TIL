# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

int cnt, r, c, x[4]={1, -1, 0, 0}, y[4]={0, 0, 1, -1};
char arr[11][11];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	cin >> r >> c;

	for(int i=0; i<r; i++)
		for(int j=0; j<c; j++)
			cin >> arr[i][j];

	for(int i=0; i<r; i++)
		for(int j=0; j<c; j++)
			if (arr[i][j] == 'P')
				for(int k=0; k<4; k++)
					if (i+x[k]>=0 && j+y[k]>=0)
						if (arr[i+x[k]][j+y[k]] == 'W') {
							arr[i][j] = '.';
							arr[i+x[k]][j+y[k]] = '.';
							cnt++;
							break;
						}

	cout << cnt;

	cout << endl;
	return 0;
}

