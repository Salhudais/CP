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
		Given any arbitrary length with multiple pairs
		of varying distances
		we can try to take the minimum of all of them
		as our metric?
		
		or we can sort them, and swap the elements 
		if they're the same side by side? 



TakeAways:


Analysis:



*/

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	long long test; cin >> test;
	while (test--) {
        string n; cin >> n;
		vector<int> fre(26, 0);
		for(auto i : n) {
			fre[i - 'a']++;
		}
		string sorted = "";
		for(int i = 0; i < 26; i++) {
			while(fre[i] > 0) {
				sorted += 'a' + i;
				fre[i]--;
			}
		}
		cout << sorted << endl;
	}
}