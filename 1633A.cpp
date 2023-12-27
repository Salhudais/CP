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
        if(n % 10 >= n % 7) cout << n - n % 7 << endl;
        else{
            int next = (n / 7 + 1) * 7;
            if(next % 10 == 0) {
                next += 7;
            }
            cout << next << endl;
        }



        
        /*
        if(quotient * 7 < 10) {
            cout << ceil(n / 7) * 7 << endl;
        }else{
            cout << (n / 7) * 7 << endl;
        }*/
	}
}