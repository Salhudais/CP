#include <vector>
#include <iostream>
#include <ostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <limits>
#include <unordered_map>
#include <unordered_set>

using namespace std;

typedef long long ll; // Shortens long long to just ll
typedef vector<double> vec;


int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	long long test; cin >> test;
    long long res = 2;
    for(int i = 2; i <= test; i++) {
        res = (res * 2) % 1000000009;
    }
    cout << res % 1000000009;
}