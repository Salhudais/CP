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
	while (test--) {
        int a,b,c; cin >> a >> b >> c;
        int diff = a + b + c;
        if(diff % 3 == 0) cout << 0 << endl;
        else cout << 1 << endl;
	}
}