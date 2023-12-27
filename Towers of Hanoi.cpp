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

void hanoi(int n, int a, int c, int b) {
    if(n == 1) {
        cout << a << " " << c<< endl;
        return;
    }
    hanoi(n-1, a,b,c);
    cout << a << " " << c << endl;
    hanoi(n-1, b, c, a);
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    cout << pow(2, n) - 1 << endl;
    hanoi(n, 1 , 3 , 2);
}