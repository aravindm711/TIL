# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

long long a, b, c, d, x;

long long findgcd(long long a , long long b)
{
   if(b==0) return a;
   a%=b;
   return findgcd(b,a);
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	cin >> a >> b >> c >> d;

	if(a!=c) {
		x = (a*c)/(findgcd(a, c));
		b*=(x/a);
		d*=(x/c);
		a=c=x;
	}
	
	if (b>d) {
	    x = findgcd(b-d, b);
	    cout << (b-d)/x << "/" << b/x;
	}
	else {
	    x = (b*d)/(findgcd(b, d));
	    a*=(x/b);
	    c*=(x/d);
	    x = findgcd(a-c, a);
	    cout << (a-c)/x << "/" << a/x;
	}

	cout << endl;
	return 0;
}

