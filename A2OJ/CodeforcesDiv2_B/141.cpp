# include <bits/stdc++.h>

using namespace std;

# define looptc					int t, c=0; cin >> t; while(t--&&++c)
# define ln                     "\n"
# define ll						long long

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("_input.txt", "r+", stdin);

    int na, ma, nb, mb, x;
    vector<vector<int>> a, b;
    vector<int> t;
    cin >> na >> ma;
    for(int i=0; i<na; ++i) {
        for(int j=0; j<ma; ++j)
            cin >> x, t.push_back(x);
        a.push_back(t);
        t.clear();
    }

    for(int i=0; i<nb; ++i) {
        for(int j=0; j<mb; ++j)
            cin >> x, t.push_back(x);
        b.push_back(t);
        t.clear();
    }

    cout << endl;
    return 0;
}
