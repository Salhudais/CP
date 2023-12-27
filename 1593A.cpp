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
        int  a,b, c; cin >> a >> b >> c;
        cout << max((max(b, c) + 1 - a), 0) << " " <<
            max((max(a, c) + 1 - b), 0) << " " <<
            max((max(a, b) + 1 - c), 0) << endl;
        /*
        long long curMax = max(a, max(b, max(a,c)));
        long long curMin = min(a, min(b, min(a,c)));
        long long aV = (curMax - a);
        long long bV = (curMax - b);
        long long cV = (curMax - c);
        long long sum = (a + b + c);
        long long d = sum - curMax - curMin;
            if(a != curMax) cout << aV +1 << " ";
            else if(a == d) cout << aV + 1<< " ";
            else cout << aV << " ";
            if(b != curMax) cout << bV +1 << " ";
            else if(b == d) cout << bV + 1<< " ";
            else cout << bV << " ";
            if(c != curMax) cout << cV +1 << " " << endl;
            else if(c == d) cout << cV + 1<< " " << endl;
            else cout << cV << " " << endl; */
	}
}