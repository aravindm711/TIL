# include <iostream>
# include <cmath>

int main() {
	int N;
	int M;
	int x;
	
	std::cout << "Enter the value of N to find out maximum remainder : ";
	std::cin >> N;
	
	x = ceil((N + 1) / 2);
	M = floor((N - 1) / 2);
	std::cout << "Maximum remainder is obtained when divided by : " << x << std::endl;
	std::cout << "Maximum remainder obtained for the value N is : " << M << std::endl;

  return 0;
}

