#include <vector>
#include <iostream>
#include <ostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <limits>
#include <unordered_map>

using namespace std;

typedef long long ll; // Shortens long long to just ll
typedef vector<double> vec;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	long long test; cin >> test;
    cout << test << " ";
	while (test != 1) {
        if(test % 2 == 0) test /= 2;
        else test = test * 3 + 1;

        cout << test << " ";
	}
}