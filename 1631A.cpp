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
        long long  n; cin >> n;
        vector<long long> m(n);
        vector<long long> r(n);
        long long currMAX = LLONG_MIN , currMin = LLONG_MIN;
        for(int i = 0; i < n; i++) {
            cin >> r[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> m[i];
        }
        for(int i = 0; i < n; i++) {
            if(r[i] > m[i]) {
                swap(m[i], r[i]);
            }
        }
        for(auto i : m) if(currMin < i) currMin = i;
        for(auto i : r) if(currMAX < i) currMAX = i;
        cout << currMin * currMAX << endl;
	}
}