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
		
	string k;
	cin >> k;

	map<char, int> cnt;
	forn(i, k.length())
		cnt[k[i]]++;

	int odd=0;
	for(auto it=cnt.begin(); it!=cnt.end(); it++)
		if (it->second%2) odd++;

	if (odd==0 || odd&1)
		cout << "First";
	else
		cout << "Second";

	cout << endl;
	return 0;
}

