#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	int x;
	int min_index;
	int* inp_val = new int[10];
	for (int i = 0; i < t; i++) {
		for (int l = 0; l < 10; i++)
			cin >> inp_val[l];

		for (int j = 0; j < 2; j++) {
			x = inp_val[0];
			for (int k = 1; k < 10; k++) {
				if (inp_val[k] < x) {
					x = inp_val[k];
					min_index = k;
				} inp_val[min_index] = 1001;
			} 
		}

		cout << x << endl;
	}

	delete [] inp_val;

	return 0;
}