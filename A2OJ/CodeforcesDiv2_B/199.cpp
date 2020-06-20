# include <bits/stdc++.h>

using namespace std;

# define looptc					int t, c=0; cin >> t; while(t--&&++c)
# define ln                     "\n"
# define ll						long long

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    freopen("_input.txt", "r+", stdin);

//    ll tp = 1, tn;
//    string mm;
//    int n, m, l, r, s, f, p, ts, d;
//    cin >> n >> m >> s >> f, p = s;
//    mm = (s > f)? "L": "R";
//    while(m--) {
//        if(p == f)
//            return 0;
//        
//        tp = tn;
//        cin >> tn >> l >> r;
//        
//        if (tn - tp >= 2) {
//            d = min((ll)(f-p), (tn-tp));
//            int dc = d;
//            while(true) {
//                if (!d) break;
//                cout << mm;
//                (d > 0)? --d: ++d;
//            }
//            if (p + dc == f)
//                return 0;
//            p += dc;
//        }
//
//        if ((l <= p && p <= r) || (mm == "R" && p+1 == l) || (mm == "L" && p-1 == r))
//            cout << "X";
//        else
//            cout << mm, p += (mm == "R")? 1: -1;
//    }

    int n, m, s, f, p, l, r, t, d;
    cin >> n >> m >> s >> f, p = 0, t = 1, d = (s > f)? -1: 1;
    string mm = (s > f)? "L": "R";
    while (s!=f) {
        if (t > p && m > 0) { 
            cin >> p >> l >> r;
            m--;
        }
        if (p == t && ((l <=s && s <= r) || (l <= s+d && s+d <= r)))
            cout << "X";
        else
            cout << mm, s+=d;
        ++t;
    }
    
    cout << endl;
    return 0;
}
