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

    long long initial; cin >> initial;
    long long count = 0; test--;

    for(int i = 0; i < test; i++) {
        long long curr; cin >> curr;
        if(curr < initial) {
            count += abs(curr - initial);
        }
        initial = max(initial,curr);
	}
    cout << count; 
}