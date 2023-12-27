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
        bool f = false;
        vector<int> m(200001);
        for(int i = 0; i < n; i++) {
            cin >> m[i];
        }
        for(int i = 0; i < n -1 ; i++) {
            if(m[i] != m[i+1]) {
                f = true;
            }
        }
        f == true ? cout << "1" << endl : cout << n << endl;

    }
}
