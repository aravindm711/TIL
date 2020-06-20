# include <bits/stdc++.h>

using namespace std;

# define looptc					int t, c=0; cin >> t; while(t--&&++c)
# define ln                     "\n"
# define ll						long long

ll x, n, sx, root, temp;

ll get_sum_of_digits(ll x) {
    ll res = 0;
    while(x) {
        res += x%10;
        x /= 10;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    freopen("_input.txt", "r+", stdin);

    cin >> n;
    ll i = 1;
    for (; i<=90; ++i) {
        temp = i*i + 4*n;
        if (pow(sqrt(temp), 2) == temp) {
            root = sqrt(temp) - i;
            if (root > 0 && (root&1) == 0) {
                root /= 2;
//                cout << i << " " << root << " " << get_sum_of_digits(root) << ln;
                if (i == get_sum_of_digits(root)) {
                    cout << root;
                    break;
                }
            }
        }
    }
    if (i > 90) cout << -1;

    cout << endl;
    return 0;
}
