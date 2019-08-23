# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

int n, x, flag;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	cin >> n;
	map<int, vector<int> > m;
	forn(i, n)
		cin >> x, m[x].push_back(i);

	vector<int> v;
	for(auto it=m.begin(); it!=m.end(); it++) {
		if (it->second.size()==1) v.push_back(it->first), v.push_back(0);
		else if (it->second.size() == 2) v.push_back(it->first), v.push_back(it->second[1]-it->second[0]);
		else {
			flag = 0;
			for(int i=1; i<it->second.size()-1; i++)
				if (it->second[i+1]-it->second[i] != it->second[i]-it->second[i-1]) {
					flag = 1;
					break;
				}
			if (!flag) v.push_back(it->first), v.push_back(it->second[1]-it->second[0]);
		}
	}
	cout << (v.size()/2) << ln;
	for(int i=0; i<v.size(); i+=2)
		cout << v[i] << " " << v[i+1] << ln;

	cout << endl;
	return 0;
}

