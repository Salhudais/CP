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
        long long mx = INT_MIN, mn =  INT_MAX;
        for(int i = 0; i < n; i++) {
            int num; cin >> num;
            if(num > mx) mx = num;
            if(num < mn) mn = num;
        }
        cout << abs(mn - mx) << endl;
	}
}