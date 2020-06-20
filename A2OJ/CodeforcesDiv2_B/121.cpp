# include <bits/stdc++.h>

using namespace std;

# define looptc					int t, c=0; cin >> t; while(t--&&++c)
# define ln                     "\n"
# define ll						long long

int n, x;
vector<int> v;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    freopen("_input.txt", "r+", stdin);

    cin >> n;
    for (int i=0; i<n; ++i)
        cin >> x, v.push_back(x);
    
    int ans = v[0];
    for (int i=0; i<n-1; ++i) {
        ans = min(max(v[i], v[i+1]), ans);
    }
    cout << min(ans, v[n-1]);

    cout << endl;
    return 0;
}
