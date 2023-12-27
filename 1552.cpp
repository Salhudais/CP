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
        string str;
        for(int i = 0; i < n; i++) {
            char c; cin >> c;
            str += c;
        }
        string so = str;
        sort(str.begin(), str.end());
        int count = 0;
        for(int i = 0; i < str.size(); i++) {
            if(so[i] != str[i]) count++;
        }
        cout << count << endl;
	}
}