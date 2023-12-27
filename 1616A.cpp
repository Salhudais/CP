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


/*
MetaCognitive Thoughts here:


TakeAways:


Analysis:



*/

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	long long test; cin >> test;
	while (test--) {
        int n; cin >> n;
        unordered_map<int, int> m;
        for(int i = 1; i <= n; i++) {
            int num; cin >> num;
            m[abs(num)]++;
        }
        int count = 0;
        for(auto [k,v] : m) {
            if(k == 0) count++;
            else count += min(2, v);
        }
        cout << count << endl;

	}
}