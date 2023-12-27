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
    int test; cin >> test;
    while(test--) {
        int n; cin >> n;
        // Check if 1 digit
        if(n <= 1) cout << 0 << endl;
        else{
            //Diff by 3 if odd ->>> 7
            if(n% 2 == 1) {
                cout << 7; n -= 3;
            }
            else {
                cout << 1; n-= 2;
            }
            //cut by two segments
            n /= 2;
            for(int i = 0; i < n; i++) {
                cout << 1;
            }
        }
        cout << endl;
    }
}
