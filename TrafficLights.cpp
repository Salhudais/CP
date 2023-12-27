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
#include <set>

using namespace std;

void solve(int n) {
    
    // Bruteforce
    unordered_set<int> r;
    vector<int> m(n + 1);
    int k; cin >> k;
    for(int i = 0; i < k; i++) {
        int gMax = 0, current = 0;
        int c; cin >> c;
        m[c] = 1;
        for(int i = 0; i <= n; i++) {
            gMax = max(gMax, i - current);
            if(m[i] == 1) current = i;
        }
        r.insert(c);
        cout << gMax << " "; 
    }
}
int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  solve(n);
  return 0;
}
