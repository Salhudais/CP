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
        long long r, b , d; cin >> r >> b >> d;
        long long packets = min(r,b);
        long long diff = max(r,b) - packets;
        long long leftover = packets * d;
        if(diff <= leftover) {
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
	}
}