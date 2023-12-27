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
        int a,b,c; cin >> a >> b >> c;
        int sum = a + b + c;
        int oddSum = 0;
        int oddCount = 0, evenCount = 0;
        if(a % 2 != 0) {
            oddCount++;
            oddSum += a;
        }else{
            evenCount++;
        }
        if(b % 2 != 0) {
            oddCount++;
            oddSum += b;
        }else{
            evenCount++;
        }
        if(c % 2 != 0) {
            oddCount++;
            oddSum += c;
        }else{
            evenCount++;
        }
        if(sum % 2 == 0 && (evenCount >= 2 || (oddCount == 2 && oddSum % 2 == 0))) {
            cout << "YES" << endl; 
        }else{
            cout << "NO" << endl;
        }
	}
}