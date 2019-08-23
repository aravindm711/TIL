# include <string>
# include <vector>
# include <algorithm>
# include <numeric>
# include <set>
# include <map>
# include <queue>
# include <iostream>
# include <sstream>
# include <cstdio>
# include <cmath>
# include <ctime>
# include <cstring>
# include <cctype>
# include <cassert>
# include <limits>
# include <utility>
# include <functional>

using namespace std;

# define cint(d) 			scanf("%d", &d)
# define cint2(a, b) 		scanf("%d %d", &a, &b)
# define cint3(a, b, c) 	scanf("%d %d %d", &a, &b, &c)
# define cint4(a, b, c, d) 	scanf("%d %d %d %d", &a, &b, &c, &d)

# define clong(d) 			scanf("%lld", &d)
# define clong2(a, b) 		scanf("%lld %lld", &a, &b)
# define clong3(a, b, c) 	scanf("%lld %lld %lld", &a, &b, &c)
# define clong4(a, b, c, d) scanf("%lld %lld %lld %lld", &a, &b, &c, &d)

# define pint1(d) 			printf("%d", d)
# define pint2(a, b) 		printf("%d %d", a, b)
# define pint3(a, b, c)		printf("%d %d %d", a, b, c)
# define pint4(a, b, c, d)	printf("%d %d %d %d", a, b, c, d)

# define plong(d)			printf("%lld", d)
# define plong2(a, b)		printf("%lld %lld", a, b)
# define plong3(a, b, c)	printf("%lld %lld %lld", a, b, c)
# define plong4(a, b, c, d)	printf("%lld %lld %lld %lld", a, b, c, d)

# define printvector(v,n)       for(int i=1;i<=n;i++) cout<<v[i]<<" "; cout<<ln;
# define printint(v) 	        copy(begin(v), end(v), ostream_iterator<int>(cout," "))
# define printintv(s,e)         copy(s,e, ostream_iterator<int>(cout," "))
# define forstl(i,v)            for(auto &i: v)
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i >= 0; i--)
# define rforsn(i,s,e)          for(int i = s; i >= e; i--)
# define clz(a)                 __builtin_clz(a) // count leading zeroes
# define ctz(a)                 __builtin_ctz(a) // count trailing zeroes
# define popc(a)                __builtin_popcount(a) // count set bits (for ints only diff for int64)
//https://gcc.gnu.org/onlinedocs/gcc/Other-Builtins.html for other in built
# define ln                     "\n"
# define FOR(i,a,b)             for(int i=a; i<=b; i++)
# define RFOR(i,b,a)            for(int i=b; i>=a; i--)
# define dbg(x)                 cout<<#x<<" = "<<x<<ln

# define mp                     make_pair
# define pb                     push_back
# define ff                     first
# define ss                     second

# define setPresent(x,s)        (s.find(x)!=s.end())
# define mset(m,v)              memset(m,v,sizeof(m))
# define INF                    0x3f3f3f3f
# define INFL                   0x3f3f3f3f3f3f3f3fLL
typedef long long              int64;
typedef pair<int,int>          p32;
typedef pair<int64,int64>      p64;
typedef pair<double,double>    pdd;
typedef pair<int, char>		   pic;
typedef vector<int64>          v64;
typedef vector<int>            v32;
typedef vector<vector<int> >   vv32;
typedef vector<p64>            vp64;
typedef vector<pic>			   vpic;
typedef vector<p32>            vp32;
typedef map<int,int>           m32;
typedef map<int64,int64>       m64;
//#pragma GCC optimize ("-O2")
//template<class T> using min_heap = priority_queue<T, std::vector<T>, std::greater<T> >;
const int MOD = 1000000007;
# define MODSET(d) 				if ((d) >= MOD) d %= MOD;
# define MODNEGSET(d) 			if ((d) < 0) d = ((d % MOD) + MOD) % MOD;
# define MODADDSET(d) 			if ((d) >= MOD) d -= MOD;
# define MODADDWHILESET(d) 		while ((d) >= MOD) d -= MOD;

const int MAXN = 4e5;
const int SQRTN = 300;
const int LOGN = 16;
const int INT_INFINITY = 1001001001;
//const slong LONG_INFINITY = 2001001001001001001ll;
const double EPS = 1e-6;
const int LIMIT = 1e6;

# define looptc 	int t; cin >> t; while(t--)
# define max(a, b)  (((a) > (b)) ? (a) : (b))
# define min(a, b)  (((a) > (b)) ? (b) : (a))

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int n;
	int t;
	cin >> n >> t;

	string inp;
	cin >> inp;

	int x = inp.length() - 1;
	forn(j, t) {	
		forn(i, x) {
			if((char)(int(inp[i])) == 'B' && (char)(int(inp[i + 1])) == 'G') {
				inp[i] = 'G';
				inp[i + 1] = 'B';
				i += 1;
			}
		}
	}

	cout << inp << ln;

	return 0;
}

