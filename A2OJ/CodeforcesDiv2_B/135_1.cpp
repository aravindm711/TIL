# include <bits/stdc++.h>

using namespace std;

# define looptc					int t, c=0; cin >> t; while(t--&&++c)
# define ln                     "\n"
# define ll						long long

ll p, d;

int non(ll p) {
    int res = 0, i = 1;
    while(p) {
        if (p%10 == 9)
            ++res, ++i, p/=10;
        else
            break;
    }

    return res;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("_input.txt", "r+", stdin);

    cin >> p >> d;
    if (d == 0) return cout << p, 0;
    int mn = floor(log10(p));
    if (non(p) == mn || non(p) == mn + 1) return cout << p, 0;
    for (int i=mn; i>0; --i) {
        ll pw = pow(10, i);
        ll rem = p%pw;
        if (p - rem - 1 >= p - d) {
            return cout << (p - rem - 1), 0;
        }
    }
    cout << p;

    cout << endl;
    return 0;
}
