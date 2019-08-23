#include<iostream>
#include<vector>
using namespace std;

int main() {
	int t;
	cin >> t;

	int n;
	int x;
	int y;
	int index_result;
	string res_val[4] = {"BOTH", "EASY", "HARD", "OKAY"};
	vector <string> final_result;
	for (int i = 0; i < t; i++) {
		cin >> n >> x >> y;

		int* arr_colors = new int[n];
		for (int j = 0; j < n; j++)
			cin >> arr_colors[j];

		if (x == arr_colors[0] && y == arr_colors[n - 1])
			index_result = 0;
		else if (x == arr_colors[0])
			index_result = 1;
		else if (y == arr_colors[n - 1])
			index_result = 2;
		else
			index_result = 3;

		final_result.push_back(res_val[index_result]);

		delete [] arr_colors;
	}

	for (int i = 0; i < final_result.size(); i++)
		cout << final_result[i] << endl;

	return 0;
}