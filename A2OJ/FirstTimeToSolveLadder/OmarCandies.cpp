#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	int x;
	int x_index;
	int* ascii_arr = new int[26];
	string input_str;
	for (int i = 0; i < t; i++) {
		cin >> input_str;

		for (int i = 0; i < 26; i++)
			ascii_arr[i] = 0;

		for (int i = 0; input_str[i] != '\0'; i++) {
			ascii_arr[int(input_str[i]) - 97]++;
		}

		x = ascii_arr[0];
		x_index = 0;
		for (int i = 1; i < 26; i++) {
			if (ascii_arr[i] > x) {
				x = ascii_arr[i];
				x_index = i;
			}
		}

		cout << x << " " << char(x_index + 97) << endl;
	}

	delete [] ascii_arr;

	return 0;
}