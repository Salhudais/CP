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
    while(test--) {

        long long x, y; cin >> x >> y;
        if(x > y) {
            if(x % 2 == 0) {
                cout << (x * x) - y + 1;
            }else{
                cout << ((x * x) - x + 1) - abs(y - x);
            }
        }else {
            if(y % 2 == 0) {
                cout << ((y * y) - y + 1) - abs(x - y);
            }else{
                cout << (y * y) - x + 1;
            }
        }
        cout << endl;
    }

}