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

typedef long long ll; // Shortens long long to just ll
typedef vector<double> vec;

void solve(int n) {
    vector<int> m(n);
    for(int i = 0; i < n; i++) cin >> m[i];
    set<int> r;
    long long count = 0;
    long long p1 =0, p2 = 0;
    while(p2 < n && p2 < n) {
        while(p2 < n && !r.count(m[p2])) {
            r.insert(m[p2]);
            count = max(count, p2 - p1 + 1);
            p2++;
        }
        while(p2 < n && r.count(m[p2])) {
            r.erase(m[p1++]);
        }
    }
    cout << count;
}

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  solve(n);
  return 0;
}
