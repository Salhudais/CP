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
  int n; cin >> n;
  vector<int> m(n);
  long long count = 0;
  for(int i = 0; i < n; i++) cin >> m[i];
  sort(m.begin(), m.end());
  int avg = m[n / 2];
  for(const int &i : m) {
    count += abs(avg - i);
  }
  cout << count;
}
