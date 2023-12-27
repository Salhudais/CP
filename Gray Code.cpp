#include <vector>
#include <iostream>
#include <ostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <limits>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <bitset>


using namespace std;

typedef long long ll; // Shortens long long to just ll
typedef vector<double> vec;

void gcode(string s, int i, int n) {
  if(i == n) {
    cout << s << endl;
    return;
  }
  s.push_back('0'); gcode(s, i + 1, n);
  s.pop_back(); s.push_back('1');
  gcode(s, i+1, n);
}
int main() {
  int n; cin >> n;
	vector<string> start = {"0","1"};
	vector<string> store;
	for(int i = 1; i < n; i++) {
		for(string &j : start) {
			store.push_back("0" + j);
		}
		reverse(start.begin(), start.end());
		for(string &i : start) {
			store.push_back("1" + i);
		}
		start  = store;
		store.clear();
	}
  for(auto i : start) cout << i << endl;
}
