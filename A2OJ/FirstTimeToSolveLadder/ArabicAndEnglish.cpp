#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	int n;
	int flag_val = 0;
	int alph_index = 0;
	for (int i = 0; i < t; i++) {
		cin >> n;

		flag_val = 0;
		alph_index = 0;
		string* inp_words = new string[n];
		for (int j = 0; j < n; j++) {
			cin >> inp_words[j];

			if (inp_words[j][0] != '#') {
				flag_val = 1;
				alph_index = j;
			}
		}

		if (flag_val) {
			for (int k = alph_index + 1; k < n; k++)
				cout << inp_words[k] << " ";
			cout << inp_words[alph_index] << " ";
			for (int k = 0; k < alph_index; k++)
				cout << inp_words[k] << " ";
		} else {
			for (int k = 0; k < n; k++)
				cout << inp_words[k] << " ";
		} cout << endl;

		delete [] inp_words;
	}

	return 0;
}