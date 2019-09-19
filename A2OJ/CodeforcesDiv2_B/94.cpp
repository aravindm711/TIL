# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

vector<int> v;
int cnt;

vector<int> adj_list[(int)1e6];
bool visited[(int)1e6];

void create_adj_list(int e) {
    int x, y;
    for(int i=0; i<e; i++) {
    	cin >> x >> y;
    	adj_list[x].push_back(y);
    	adj_list[y].push_back(x);
    }
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int n, m, x;
	cin>>n>>m;
	create_adj_list(m);

	while (true) {
		v.clear();
		forsn(i, 1, n+1)
			if (adj_list[i].size()==1) {
				v.push_back(i);
				adj_list[i].push_back(0);
			}

		if(!v.size()) break;
		else cnt++;

		for(auto i: v) {
			x = adj_list[i][0];
			if (adj_list[x][1]==0) {
				adj_list[x].push_back(0);
				continue;
			}
			adj_list[x].erase(remove(adj_list[x].begin(), adj_list[x].end(), i), adj_list[x].end());
		}
	}
	cout << cnt;
	cout << endl;
	return 0;
}

