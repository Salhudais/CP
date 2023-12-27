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
#include <bitset>


using namespace std;

typedef long long ll; // Shortens long long to just ll
typedef vector<double> vec;

void gcode(string s, int i, int n) {
  if(i == n) {
    cout << s << endl;
    return;
  }
  s.push_back('0'); gcode(s, i + 1, n);
  s.pop_back(); s.push_back('1');
  gcode(s, i+1, n);
}
int main() {
  /*ios_base::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  string res = "";
  gcode(res, 0, n); */
  ios_base::sync_with_stdio(0); cin.tie(0);
  long long n; cin >> n;
  // unordered_map<int, int> m;
  vector<long long> m(n);
  for(int i = 0; i < n; i++) {
    cin >> m[i];
  }
  sort(m.begin(), m.end());
  long long count = 1;
  for(long long i = 1; i < m.size(); i++) {
    if(m[i] != m[i-1]) {
        count++;
    }
  }
  cout << count;
}
