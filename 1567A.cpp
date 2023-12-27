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
        int n; string word; cin >> n >> word;
        string result;
        for(auto i : word) {
            if(i == 'L') {
                result += 'L';
            }
            if(i == 'R') {
                result += 'R';
            }
            if(i == 'U') {
                result += 'D';
            }
            if(i == 'D') {
                result += 'U';
            }
        }
        cout << result << endl;
	}
}