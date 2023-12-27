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


bool spell(vector<vector<char>> ch, string s, vector<bool> is_available) {
	unordered_map<int, vector<char>> m;
	bool found = false;
	char initial = s[0];
	for(int j = 0; j < ch.size(); j++) {
		for(int k = 0; k < ch[j].size(); k++) {
			if(initial == ch[j][k] && is_available[j] == true)  {
                cout << ch[j][k] << endl;
				is_available[j] = false;
				found  = spell(ch, s.substr(1, s.length() -1), is_available);
				if(found) return true;
                else{
                    is_available[j] = true;
                    continue; 
                }
			}
		}
	}
	return false;
}


bool spell(vector<vector<char>> ch, string s) {
  vector<bool> is_available;
  for (int i = 0; i < ch.size(); i++) {
    is_available.push_back(true);
  } 
  return spell(ch, s, is_available);
}

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
