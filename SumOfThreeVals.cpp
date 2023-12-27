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
    // 1 2 5 7
    // 1 2   7
    // 1 2 5 7 // 14
    // if sum > target => --lastPointer
    // if middle pointer reaches lastpointer - 1, move the first pointer
    long long m;  cin >> m;
    vector<pair<long long, int>> res(n);
    for(int i = 0; i < n; i++) {
        long long  c; cin >> c;
        res[i] = {c, i + 1};
    }
    sort(res.begin(), res.end());
    for(int p2 = 0; p2 < n; p2++) {
        int p1 = 0,p3 = n - 1;
        while(p1 != p3) {
            long long difference = m - res[p2].first;
            if(p1 != p2 && p3 != p2 && (res[p1].first + res[p3].first == difference)) {
                cout << res[p1].second << " " <<  res[p2].second << " " << res[p3].second;
                return;
            }
            else {
                if(res[p1].first + res[p3].first < difference) p1++;
                else p3--;
            }
        }
    }
    cout << "IMPOSSIBLE";
}
int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  solve(n);
  return 0;
}
