# include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("_input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int n;
	cin >> n;

	int arr[n];
	vector<int> even, odd;
	for(int i=0; i<n; i++) {
		cin >> arr[i];

		if (!(arr[i]&1)) 
			even.push_back(i+1);
		else 
			odd.push_back(i+1);
	}
	if (even.size() == 1)
		cout << even[0];
	else
		cout << odd[0];

	cout << endl;
	return 0;
}