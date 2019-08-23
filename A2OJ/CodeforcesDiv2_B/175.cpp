# include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int n, s, t, count=0;
	cin >> n >> s >> t;

	if (s == t) {
		cout << 0 << endl; return 0;
	} else {
		int p[n];
		for(int i=0; i<n; i++)
			cin >> p[i];

		int bs=s, as;
		for(int i=0; i<n; i++) {
			as = p[bs-1];
			count++;
			if(as == t) break;
			bs = as;
		}
		if (as != t) count = -1;
		cout << count;
	}

	cout << endl;
	return 0;
}