# include <bits/stdc++.h>

using namespace std;

# define printvector(v,n)       for(int i=0;i<n;i++) cout<<v[i]<<" "; cout<<ln;
# define forn(i,e)              for(int i = 0; i < e; i++)
# define forsn(i,s,e)           for(int i = s; i < e; i++)
# define rforn(i,s)             for(int i = s; i > 0; i--)
# define rforsn(i,s,e)          for(int i = s; i > e; i--)
# define looptc					int t; cin >> t; while(t--)
# define ln                     "\n"

int maxt[105], maxp[105], maxg[105], n, c, cnt;
string ppl[105], x;

int check(string x) {
	int flag=0;
	for(int i=1; i<x.length(); i++)
		if (x[i]==x[0] && x[i]!='-') flag++;
	if (flag==5) return 1;
	else {
		flag=0;
		char ch=x[0];
		for(int i=1; i<x.length(); i++) 
			if (x[i]<ch && x[i]!='-') flag++, ch=x[i];
		if (flag==5) return 2;
	}
	return 3;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int t;cin>>t;
	forn(k, t) {
		cin>>n>>ppl[k];
		forn(i, n) {
			cin >> x;
			c = check(x);
			if (c==1) maxt[k]++;
			if (c==2) maxp[k]++;
			if (c==3) maxg[k]++;
		}
	}
	cout<<"If you want to call a taxi, you should call: ";
	c = *max_element(maxt, maxt+t);
	cnt = count(maxt, maxt+t, c);
	forn(i, t) {
		if (maxt[i]==c && cnt>1)
			cout << ppl[i] << ", ", cnt--;
		else if (cnt==1 && maxt[i]==c)
			cout << ppl[i], cnt--;
	}
	cout << ".\n";
	cout<<"If you want to order a pizza, you should call: ";
	c = *max_element(maxp, maxp+t);
	cnt = count(maxp, maxp+t, c);
	forn(i, t) {
		if (maxp[i]==c && cnt>1)
			cout << ppl[i] << ", ", cnt--;
		else if (cnt==1 && maxp[i]==c)
			cout << ppl[i], cnt--;
	}
	cout << ".\n";
	cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
	c = *max_element(maxg, maxg+t);
	cnt = count(maxg, maxg+t, c);
	forn(i, t) {
		if (maxg[i]==c && cnt>1)
			cout << ppl[i] << ", ", cnt--;
		else if (cnt==1 && maxg[i]==c)
			cout << ppl[i], cnt--;
	}
	cout << ".";

	cout << endl;
	return 0;
}

