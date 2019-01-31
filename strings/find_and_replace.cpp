# include <iostream>
# include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	string inp;
	cin >> inp;

	string check = "WUB";

	int index;
	while (true) {
		index = inp.find(check, 0);
		if (index != string::npos) {
			if (index == 0) inp.replace(index, 3, "");
			else inp.replace(index, 3, " ");
		} else break;
	}

	cout << inp << endl;

	return 0;
}

