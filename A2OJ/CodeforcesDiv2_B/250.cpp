# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc                    int t; cin >> t; while(t--)
# define ln                     "\n"

int sum, limit, f, indx;
pair<int, int> p[100005];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // freopen("_input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    cin>>sum>>limit;
    if(sum==1) return cout << 1 << ln << 1 << endl, 0;
    for(int i=1; i<=limit; i++)
        for(int j=0; j<20; j++)
            if (i&(1<<j)) {
                p[i] = make_pair(1<<j, i);
                break;
            }
    sort(p+1, p+limit+1);
    // forsn(i, 1, limit+1)
    //     cout << p[i].first << " " << p[i].second << ln;

    for(int i=limit; i>0; i--)
        if(p[i].first <= sum) {
            indx=i;
            break;
        }

    vector<int> v;
    int x;
    for(int k=indx; k>0; k--) {
        v.clear();
        x = sum - p[k].first;
        v.push_back(p[k].second);
        for(int j=k-1; j>0; j--) {
            if (p[j].first<=x) {
                x-=p[j].first;
                v.push_back(p[j].second);
                if(x==0) {
                    cout<<v.size()<<ln;
                    printvector(v, v.size())
                    return 0;
                }
            }
        }
    }
    cout << -1;

    cout << endl;
    return 0;
}

