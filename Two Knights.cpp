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

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  string n; cin >> n;
  unordered_map<char, int> m;
  int oddCount = 0;
  for(auto i : n) m[i]++;
  for(const auto& [key, value] : m) {
    if(value % 2 != 0) oddCount++;
  }
  if(oddCount > 1) cout << "NO SOLUTION" << endl;
  else {
    vector<char> r;
    for(auto const& [key, value] : m) {
      int k = value / 2;
      if(value % 2 == 0) {
        for(int i = 0; i < k; i++) {
          cout << key;
          r.push_back(key);
        }
      }
    }
    for(auto const& [key, value] : m) {
      int k = value; 
      if(value % 2 != 0) {
        for(int i = 0; i < k; i++) {
          cout << key;
        }
      }
    }
    for(int i = r.size() - 1; i >= 0; i--) {
      cout << r[i];
    }
  }
}
