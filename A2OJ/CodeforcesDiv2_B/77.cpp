# include <bits/stdc++.h>

using namespace std;

# define looptc					int t, c=0; cin >> t; while(t--&&++c)
# define ln                     "\n"
# define ll						long long

ll gen_sln(deque<int> dn, int c) {
    ll sln = 0;
    for(int i=c-1, j=0; i>=c/2; --i, ++j) sln += dn[i] * pow(10, j);
    for(int i=(c/2)-1, j=c/2; i>=0; --i, ++j) sln += dn[i] * pow(10, j);

    return sln;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    freopen("_input.txt", "r+", stdin);

//    deque<int> dn;
//    int c = 0;
//    ll n, nc, sln = 0;
//    cin >> n, nc = n;
//    while(nc) ++c, nc /= 10;
//    c += (c&1)? 1: 0;
//    for (int i=0; i<c/2; ++i) dn.push_front(7);
//    for (int i=c/2; i<c; ++i) dn.push_front(4);
//    deque<int> dnc = dn;
//
//    for (int i=(c/2)-1; i>=0; --i) {
//        for (int j=0; j<c/2; ++j) {
//            sln = gen_sln(dn, c);
//            cout << sln << ln;
//            if (sln >= n)
//                return cout << sln, 0;
//            swap(dn[i+j], dn[i+j+1]);
//        }
//    }
//    dnc.push_back(7), dnc.push_front(4);
//    cout << gen_sln(dnc, c+2);

    ll n;
    string y;
    cin >> n;
    while (true) {
        y += "47";
        sort(y.begin(), y.end());
        do {
            if (stoll(y) >= n)
                return cout << stoll(y), 0;
        } while(next_permutation(y.begin(), y.end()));
    }

    cout << endl;
    return 0;
}
