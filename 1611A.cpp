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
        int num; cin >> num;
        if(num % 2 == 0) { cout << 0 << endl; continue; }
        bool even = false; int last = -1;
        while(num >= 10) {
            if((num % 10) % 2 == 0) even = true;
            last =  num / 10;
            num /= 10;
        }
        if(last % 2 == 0) cout << 1 << endl;
        else if(even) cout << 2 << endl;
        else cout << -1 << endl;
	}
}