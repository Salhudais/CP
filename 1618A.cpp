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


/*
MetaCognitive Thoughts here:


TakeAways:


Analysis:



*/

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	long long test; cin >> test;
	while (test--) {
        int n; cin >> n;
        vector<int> m;
        int squares = pow(n, 1.0/2) + 1e-9;
        int cubes = pow(n, 1.0/3) + 1e-9;
        int sixth = pow(n, 1.0/6) + 1e-9;
        cout << squares + cubes - sixth << endl;

	}
}