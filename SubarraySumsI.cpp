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
    int m; cin >> m;
    vector<int> r(n);
    for(int &x: r) cin >> x;
    int p1 = 0, p2 = 0;
    int currentsum = 0, count = 0;
    while(p2 < n) {
        currentsum += r[p2++];
        while(currentsum > m) {
            currentsum -= r[p1++];
        }
        if(currentsum == m) count++;
    }
    cout << count;
}
int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  solve(n);
  return 0;
}
