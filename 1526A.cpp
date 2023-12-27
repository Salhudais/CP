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
        vector<int> m(2 * n);
        vector<int> r(2 * n);
        int odd = 1, even = 0;
        for(int i = 0; i < 2 * n; i++) cin >> m[i];
        sort(m.begin(), m.end());

        for(int i = n; i < m.size(); i++) {
            r[odd] = m[i];
            odd += 2;
        }
        for(int i = 0; i < n; i++) {
            r[even] = m[i];
            even += 2;
        }
        for(auto i : r) cout << i << " ";
        cout << endl;

	}
}