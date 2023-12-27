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

using namespace std;

typedef long long ll; // Shortens long long to just ll
typedef vector<double> vec;


/*
MetaCognitive Thoughts here:


TakeAways:


Analysis:



*/
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
long long appledivision(vector<long long> m, int i, long long g1, long long g2) {
    if(i < 0) return abs(g2 - g1);
    long long result = appledivision(m, i - 1, g1 + m[i], g2);
    long long result1 = appledivision(m, i - 1, g1, g2 + m[i]);

    return min(result, result1);
}
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    vector<long long> m(n);
    for(int i = 0; i < n; i++) cin >> m[i];
    cout << appledivision(m, m.size() -1, 0, 0);
}