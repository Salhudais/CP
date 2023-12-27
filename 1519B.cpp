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
        int n, m, k, count = 0;
        cin >> n >> m >> k;
        int x = 1, y = 1;
        while(x < n || y < m) {
            if(y + 1 <= m) {
                y++;
                count += x;
            }else if(x + 1 <= n) {
                x++;
                count += y;
            }
        }
        if(count == k) cout << "YES" << endl;
        else cout << "NO" << endl;
	}
}