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
        double n, k; cin >> n >> k;
        if((k + k -1) > n) {
            cout << "-1" << endl;
            continue;
        }
        vector<string> m;
        for(int i = 0; i < n; i++) {
            string str;
            for(int j = 0; j < n; j++) {
                    if(j == i && i % 2 == 0 && k > 0) {
                        str += 'R';
                        k--;
                    }else{
                        str +='.';
                    }
            }
            m.push_back(str);
        }
        for(auto i : m) cout << i << endl;
	}
}