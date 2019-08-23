#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;

	int c;
	int v;
	int count;
	int max_votes = 0;
	int winner_index[2] = {0};
	for (int x = 0; x < t; x++) {
		cin >> c >> v;

		int** priority_list = new int*[v];
		for (int i = 0; i < v; i++)
			priority_list[i] = new int[c];

		int* cand_list = new int[c];
		for (int i = 0; i < c; i++)
			cand_list[i] = 0;

		for (int i = 0; i < v; i++) {
			for (int j = 0; j < c; j++) {
				cin >> priority_list[i][j];

				cand_list[priority_list[i][0] - 1]++;
			}
		}

		count = 0;
		max_votes = *max_element(cand_list, cand_list + c);
		for (int i = 0; i < c; i++) {
			if (count < 2) {
				if (max_votes == cand_list[i]) {
					winner_index[count] = i;
					count++;
				}
			} else { break; }
		}

		if (count == 1 && (cand_list[winner_index[0]] >= ceil(v / 2))) {
			cout << winner_index[0] + 1 << " 1" << endl;
		} else {
			int vote_count[2] = {0};

			int a = distance(cand_list, find(cand_list, cand_list + c, max_votes));
			cand_list[a] = 0;

			max_votes = *max_element(cand_list, cand_list + c);
			int b = distance(cand_list, find(cand_list, cand_list + c, max_votes));

			for (int i = 0; i < v; i++) {
				for (int j = 0; j < c; j++) {
					if (a + 1 == priority_list[i][j]) {
						vote_count[0]++;
						break;
					} else if (b + 1 == priority_list[i][j]) {
						vote_count[1]++;
						break;
					}
				}
			}

			if (vote_count[0] > vote_count[1])
				cout << a + 1 << " 2" << "\n";
			else
				cout << b + 1 << " 2" << "\n";
		}

		delete [] cand_list;
		for (int i = 0; i < v; i++)
			delete [] priority_list[i];
		delete [] priority_list;
	}

	return 0;
}