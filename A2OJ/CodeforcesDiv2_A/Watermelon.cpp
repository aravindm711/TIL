# include <iostream>

int main() {
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int w; 
	std::cin >> w;

	if (w == 2) {
		std::cout << "No" << std::endl;
		return 0;
	}
	if (w % 2 == 0) std::cout << "Yes" << std::endl;
	else std::cout << "No" << std::endl;

	return 0;
}