#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	int n;
	int m;
	for (int i = 0; i < t; i++) {
		cin >> n >> m;

		int** inp_mat = new int*[n];
		for (int j = 0; j < n; j++)
			inp_mat[j] = new int[m];

		

		/*
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				cout << inp_mat[i][j] << " ";
			cout << endl;
		}
		*/

		for (int j = 0; j < n; i++)
			delete [] inp_mat[j];
		delete [] inp_mat;
	}

	return 0;
}