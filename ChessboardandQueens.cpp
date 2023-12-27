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

using namespace std;

typedef long long ll; // Shortens long long to just ll
typedef vector<double> vec;
void solve(int n) {
   int m; cin >> m;
   vector<int> a(n),b(n);
   for(auto &x: a) {
    cin >> x, x--;
   }
   while(m--) {
    int ans = 1;
    int d, c; cin >> d >> c;
    swap(a[d - 1], a[c - 1]);
    for(int i = 0; i < n; i++) {
        b[a[i]] = i;
   }
    for(int i = 1; i < n; i++) {
        ans += b[i] < b[i-1];
    }
    cout << ans << endl;
   }
}
int counter = 0;
void solve(vector<vector<char>> m, int i, int j, int& count, int qcount) {
    if(qcount == 8) {
        count++;
        return;
    }
    if(i == 8 && qcount != 8) return;

    if(m[i][i] == '*')
}
int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  vector<vector<char>> m(8);
  for(int i = 0; i < 8; i++) {
    vector<char> r(8);
    for(int j = 0; j < 8; j++) cin >> r[j];
    m[i] = r;
  }
  solve(m, 0, 0, counter, 0);
}
