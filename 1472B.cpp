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
	long long test; cin >> test;
	while (test--) {
        int n; cin >> n;
        int sumOne = 0, sumTwo = 0;
        for(int i = 0; i < n; i++) {
            int num; cin >> num;
            if(num == 1) sumOne++;
            else sumTwo++;
        }
        if(sumOne < sumTwo && sumOne % 2 != 0) {
            if(sumOne < sumTwo) cout << "NO" << endl;

        }
        else if(sumOne % 2 == 0 && sumOne > 0 && sumTwo >= 1) {
            cout << "YES" << endl;
        }else if(sumOne > 0 && sumOne % 2 == 0 && sumTwo == 0) {
            cout << "YES" << endl;
        }else if(sumOne == 0 && sumTwo % 2 == 0 && sumTwo > 1) {
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
	}
}