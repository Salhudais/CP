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
    if(test == 2 || test == 3) cout << "NO SOLUTION";
    else {
        int left, right;
        test % 2 == 0 ? right = (test / 2) + 1 : right = (test / 2) + 2;
        test % 2 == 0 ? left = (test / 2) - 1 : left = (test / 2);

        while(right <= test && left >= 1) {
            cout << right << " " <<  left << " ";
            right++;
            left--;
        }
        if(test % 2 == 0) cout << test << " " << test / 2;
        else cout << (test / 2) + 1; 
    }
}