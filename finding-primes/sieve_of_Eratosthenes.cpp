# include <bits/stdc++.h>

using namespace std;

void sieve_of_eratosthenes(int n) {
	// Initialise an array of boolean values with true assigned
	bool primes_list[n];
	memset(primes_list, true, n);

	for(int p = 2; p < sqrt(n); p++) {

		if (primes_list[p]) {

			for(int i = p * p; i < n; i += p) {

				primes_list[i] = false;

			}
		}
	}

	for(int i = 2; i < n; i++) {

		if (primes_list[i]) {

			cout << i << " ";
			
		}
	}

	cout << endl;
}

int main() {
	// finding total primes below n
	int n;
	cin >> n;

	sieve_of_eratosthenes(n);

	return 0;
}