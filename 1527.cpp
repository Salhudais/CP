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
        int n; cin >> n;
        int result = n;
        if(n == 0 || n == 1) cout << 0 << endl;
        else{
            int curr = 3, max = 1;
            while(true) {
                if(n > curr) {
                    curr = (curr * 2) + 1;
                    max = max + max + 1;
                }else{
                    break;
                }
            }
            cout << max << endl;
        }
	}
}