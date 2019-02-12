// Implementation of the explanation.


# include <string>
# include <vector>
# include <algorithm>
# include <numeric>
# include <set>
# include <map>
# include <queue>
# include <iostream>
# include <sstream>
# include <cstdio>
# include <cmath>
# include <ctime>
# include <cstring>
# include <cctype>
# include <cassert>
# include <limits>
# include <utility>
# include <functional>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int a = 34;
  
  cout << (a << 1) << endl;       // multiplying the number by 2
  
  cout << (a >> 2) << endl;       // dividing the number by 4 (will give the integer division result)
  
  cout << (a | (1 << 3)) << endl; // changing the 4th bit from 0 to 1
  
  cout << (a & (1 << 3)) << endl; // checking if the jth bit is on or off (0 if 0, non-zero if 1)

	return 0;
}

