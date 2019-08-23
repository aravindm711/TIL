#include<iostream>
#include<vector>
using namespace std;

int main() {
	/*
	int* arr = new int[4];
	for (int i = 0; i < 4; i++)
		cout << arr[i];
	*/

	
	string* str = new string[2];
	cin >> str[0] >> str[1];
	cout << str[0][0] << str[1];
	

	/*
	int x = 2;
	cout << x << " " << char(1 + 97) << endl;
	*/

	/*
	vector<string> str;

	str.push_back("hello");
	str.push_back("beyy");

	cout << str[1][3] << endl;
	*/
	return 0;
}