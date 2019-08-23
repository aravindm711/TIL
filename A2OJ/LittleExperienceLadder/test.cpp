#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int c;
	std::cin >> c;

	int* cand_list = new int[c];
	int* sorted_cand_list = new int[c];

	for (int i = 0; i < c; i++)
		cin >> cand_list[i];

	copy(cand_list, cand_list + c, sorted_cand_list);
	sort(sorted_cand_list, sorted_cand_list + c);

	int x = distance(cand_list, find(cand_list, cand_list + c, 3));

	cout << x;

	cout << endl;

	return 0;
}