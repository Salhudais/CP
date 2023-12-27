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
		string st1 = "()", st2 = "(())", temp = "";
		vector<string> m;
		//Output all Ones
		for(int i = 0; i < n; i++) {
			temp += st1;
		}
		m.push_back(temp); n--; temp.clear();
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				if(j == i) temp += st2;
				else temp += st1;
			}
			m.push_back(temp); temp.clear();
		}
		for(auto i : m) cout << i << endl;
	}
}