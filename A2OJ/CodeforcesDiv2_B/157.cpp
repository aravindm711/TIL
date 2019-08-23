# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

int arr[15];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int lineone=0, linetwo=0, linethree=0, sum=0;
	for(int i=0; i<9; i++) {
		cin >> arr[i];
		if (i<3) lineone += arr[i];
		if (i>2 && i<6) linetwo += arr[i];
		if (i>5 && i<9) linethree += arr[i];
	}

	sum = lineone+linetwo+linethree;
	arr[0] = sum/2 - lineone;
	arr[4] = sum/2 - linetwo;
	arr[8] = sum/2 - linethree;

	for(int i=0; i<9; i++) {
		cout << arr[i] << " ";
		if (i==2 || i==5) cout << ln;
	}

	cout << endl;
	return 0;
}

