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

long long   trian(long long num) {
	double res = sqrt((2 * num) + 0.25) - 0.5;
	if(res != floor(res)) return -1;
	else return res;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	long long test; cin >> test;
	while (test--) {
		long long n; cin  >> n;
		long long  neg = -n + 1;
			cout << neg << " " << n << endl; 

		// Alternative Solution
		/*
		long long  n; cin >> n;
		if(n > 1 && n % 2 != 0) {
			cout << n / 2 << " " << (n / 2) + 1 << endl;
		}else if(trian(n) != -1 && n > 1) {
			cout << 1 << " " << trian(n) << endl;
		}else{ 
			long long n; cin  >> n;
			long long  neg = -n + 1;
			cout << neg << " " << n << endl; 
		} */
	}
}