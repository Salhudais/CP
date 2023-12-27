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
    // Solution two:
    vector<int> m;
    for(int i = 0; i < n; i++) {
        int c; cin >> c;
        int p1 = 0, p2 = m.size();
        while(p1 < p2) {
            int mid = (p1 + p2) / 2;
            if(c > m[mid]) p1 = mid + 1;
            else p2 = mid;
        }
        if(p1 == m.size()) m.push_back(c);
        else {
            m[p1] = c;
        }
    }
    cout << m.size();

    /*
    // SOlution 1
    multiset<int> m;
    for(int i = 0; i < n; i++) {
        int c; cin >> c;
        auto next = m.upper_bound(c);
        if(next == m.end()) m.insert(c);
        else {
            m.insert(c);
            m.erase(next);
        }
    }
    cout << m.size();
    */
}
int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  solve(n);
  return 0;
}
