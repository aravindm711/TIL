# include <bits/stdc++.h>

using namespace std;

# define looptc					int t, c=0; cin >> t; while(t--&&++c)
# define ln                     "\n"
# define ll						long long

ll n, x;
vector<ll> a;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("_input.txt", "r+", stdin);

    cin >> n;
    bool sat = true;
    for (int i=0; i<n; ++i) {
        cin >> x, a.push_back(x);
        if (i)
            if(a[i] < a[i-1])
                sat = false;
    }
    
    if (sat)
        cout << 0;
    else {

    }

    cout << endl;
    return 0;
}
