#include <vector>
#include <iostream>
#include <ostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <limits>
#include <unordered_map>
#include <set>
using namespace std;

typedef long long ll; // Shortens long long to just ll
typedef vector<double> vec;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	long long test; cin >> test;
	while (test--) {
        int n; cin >> n;
        vector<int> m(n);
        set<int> r;
        for(int i = 0; i < n; i++) {
            cin >> m[i];
            r.insert(m[i]);
        }
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                r.insert(abs(m[i] - m[j]));
            }
        }
        if(r.size() > 300) cout << "NO\n";
        else{
            cout << "YES\n" << r.size() << "\n";
            for(auto i : r) {
            cout << i << " ";
            }
            cout << endl;
        }
	}
}