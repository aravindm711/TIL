# include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int n;
	cin >> n;

	int prev=0, sum=0, cur;
	for(int i=0; i<n; i++) {
		cin >> cur;

		sum += abs(cur-prev)+2;
		prev = cur;
	} cout << sum-1;

	cout << endl;
}