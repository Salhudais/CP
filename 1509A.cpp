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
        vector<int> m(n);
        for(int i = 0; i < n; i++) {
            cin >> m[i];
        }
        int right = m.size() -1;
        for(int i = 1;  right > i && i < n; i++) {
            if(m[i] % 2 != 0 && m[i-1] % 2 == 0 
                || (m[i] % 2 == 0 && m[i-1] % 2 != 0)) {
                swap(m[i], m[right]);
                right--;
                i--;
            }
        }
        for(auto i : m) cout << i << " ";
        cout << endl;
	}
}