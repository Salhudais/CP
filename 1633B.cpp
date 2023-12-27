#include <vector>
#include <iostream>
#include <ostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <limits>
#include <unordered_map>
#include <numeric>
using namespace std;

typedef long long ll; // Shortens long long to just ll
typedef vector<double> vec;


int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	long long test; cin >> test;
	while (test--) {
        string str; cin >> str;
        int c1 = 0, c2 = 0;
        for(char i : str) {
            if(i == '0') c2++;
            else c1++;
        }
        if(c1 != c2) cout << min(c1,c2) << endl;
		else cout << c1 - 1 << endl;
        // 1100
        // 110
        // 011
    } 
}