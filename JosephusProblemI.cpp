#include <vector>
#include <iostream>
#include <ostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <limits>
#include <unordered_map>
#include <climits>
#include <unordered_set>
#include <set>
#include <queue>

using namespace std;

typedef long long ll; // Shortens long long to just ll
typedef vector<double> vd;
typedef vector<int> vi;

int factorial(int n) {
    int count = 1;
    for(int i = 2; i <= n; i++) {
        count *= i;
    }
    return count; 
}
int nChooseR(int n, int r){
    return (factorial(n) / (factorial(r) * factorial(n - r)));
}
int maximum = INT_MIN;
void solve() {
    int n; cin >> n;
}
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
