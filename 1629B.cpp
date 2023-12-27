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
// BRUH
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	long long test; cin >> test;
	while (test--) {
        int l, r, k; cin >> l >> r >> k;
        int oddCount = 0;
        int res = (r - l) / 2;
        if(r % 2 != 0 || l % 2 != 0) {
            res++;
        }
        oddCount = res;
        if(oddCount == 0) {
            cout << "YES" << endl;
        }else if(oddCount == 1 && r - l == 0 && r == 1){
            cout << "NO" << endl;
        }else if(oddCount == 1 && r-l == 0) {
            cout << "YES" << endl;
        }else if(oddCount <= k) {
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
	}
}