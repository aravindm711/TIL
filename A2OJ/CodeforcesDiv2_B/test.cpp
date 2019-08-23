#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("_input.txt", "r", stdin);

	string x = "e";
	int ans = x.find("e");
	cout << ans;
	x.replace((int)x.find("e"), 1, "");
	cout << x.length();

	cout << endl;
	return 0;
}