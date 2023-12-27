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
        Binary search to find the maximum value that is
        at

TakeAways:


Analysis:



*/

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	long long test; cin >> test;
	while (test--) {
        int n, k; cin >> n >> k;
        vector<pair<int,int>> m(n);
        vector<int> benchmarks(n), bonus(n);
        for(int i = 0; i < n * 2; i++) {
            if(i < n) cin >> benchmarks[i];
            else cin >> bonus[i - n];
        }
        for(int i = 0; i < n; i++) {
            m[i] = {benchmarks[i], bonus[i]};
        }
        sort(m.begin(), m.end());
        for(auto i : m) {
            if(i.first <= k) {
                k += i.second;
            }
        }
        cout << k << endl;
	}
}