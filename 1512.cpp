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
        vector<int> m(101,0);
        vector<int> r(n);
        for(int i = 0; i < n; i++) {
            int num; cin >> num;
            m[num]++;
            r[i] = num;
        }
        int unique;
        for(int i = 0; i < m.size(); i++) {
            if(m[i] == 1) unique = i;
        }
        for(int i = 0; i < r.size(); i++) {
            if(r[i] == unique) {
                cout << i + 1<< endl;
            }
        }
	}
}