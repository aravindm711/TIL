# include <bits/stdc++.h>
using namespace std;

int calculate_sum(int n) {
    /*
        let n be the power of 2 to be found,
        
        2^n = (2^0 + 2^1 + .... + 2^(n-1)) + 1       -----> 1

        this can be intuitively understood if you look at how 
        the value of a binary equivalent of a decimal number 
        changes when it is incremented

        the 1st equation leads us to,

        summation_till(2^n) = 2^(n+1) - 1
    */
    return (1 << (n+1)) - 1;
}

int main() {
    int n;
    cin >> n;
    cout << "Sum of powers of 2 till 10th power: " << calculate_sum(n);

    return 0;
}