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
        string n; cin >> n;
        int a = 0, b = 0, c = 0;
        for(auto i : n) {
            if(i == 'A') a++;
            else if(i == 'B') b++;
            else if(i == 'C') c++;
        }
        if(a + c == b) cout << "YES" << endl;
        else cout << "NO" << endl;
	}
}