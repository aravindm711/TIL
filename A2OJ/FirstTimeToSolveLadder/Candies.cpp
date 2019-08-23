#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	int n;
	int k;
	int* arr_of_result = new int[t];
	for (int j = 0; j < t; j++) {
		cin >> n >> k;

		int* candyCount = new int[n];
		arr_of_result[j] = 0;
		for (int i = 0; i < n; i++) {
			cin >> candyCount[i];

			arr_of_result[j] += candyCount[i]/k;
		}

		delete [] candyCount;
	}

	for (int i = 0; i < t; i++)
		cout << arr_of_result[i] << endl;

	delete [] arr_of_result;

	return 0;
}