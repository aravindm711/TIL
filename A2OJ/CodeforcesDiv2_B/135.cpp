# include <bits/stdc++.h>

using namespace std;

# define looptc					int t, c=0; cin >> t; while(t--&&++c)
# define ln                     "\n"
# define ll						long long

ll p, d, mn;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("_input.txt", "r+", stdin);

    cin >> p >> d;
    if (d == 0)
        return cout << p, 0;
    int nd = floor(log10(p) + 1);
    for(int i=0; i<nd-1; ++i)
        mn += 9 * pow(10, i);
    mn += (floor((p/pow(10, nd-1))) - 1) * pow(10, nd-1);
    if (mn >= p - d)
        cout << mn;
    else {
        int ndd = floor(log10(d) + 1);
        ll sn = pow(10, ndd-1);
        ll np =floor(p/pow(10, ndd))*pow(10, ndd);
        for(int i=0; i<ndd; ++i)
            np += 9 * pow(10, i);
        while(np > p)
            np -= sn;
        cout << np;
   }

    cout << endl;
    return 0;
}
