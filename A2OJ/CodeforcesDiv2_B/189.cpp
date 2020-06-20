# include <bits/stdc++.h>

using namespace std;

# define looptc					int t, c=0; cin >> t; while(t--&&++c)
# define ln                     "\n"
# define ll						long long

int k, n=0;
int a[111], b[111];
bool f[111];
void dfs(int i) {
    f[i] = true;
    for (int j=1; j<=n; ++j) {
        if (f[j])
            continue;
        if (a[i] > a[j] && a[i] < b[j])
            dfs(j);
        else if (b[i] > a[j] && b[i] < b[j])
            dfs(j);
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    freopen("_input.txt", "r+", stdin);

    cin >> k;
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    memset(f, 0, sizeof(f));
    for (int i=1; i<=k; ++i) {
        int m, x, y;
        cin >> m;
        if (m == 1) {
            ++n;
            cin >> a[n];
            cin >> b[n];
        } else {
            cin >> x >> y;
            memset(f, 0, sizeof(f));
            dfs(x);
            if (f[y])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    cout << endl;
    return 0;
}
