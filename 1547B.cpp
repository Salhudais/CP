#include <vector>
#include <iostream>
#include <ostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <limits>
#include <unordered_map>

using namespace std;

typedef long long ll; // Shortens long long to just ll
typedef vector<double> vec;


/*
MetaCognitive Thoughts here:
        Try to reformulate the string maybe?

TakeAways:


Analysis:



*/

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	long long test; cin >> test;
	while (test--) {
        string a; cin >> a;
        int a_index = -1;
        for(int i = 0; i < a.size(); i++)  if(a[i] == 'a') a_index = i;
        // Check for violations
        bool flag = false;
        int left = a_index - 1, 
        right = a_index + 1, curr = 1;
        while(left >= 0 || right < a.size()) {
            if(left >= 0 && (a[left] - 97 == curr)) {
                left--;
            }else if(right < a.size() && (a[right] - 97 == curr)) {
                right++;
            }else{
                flag = true;
                break;
            }
            curr++;
        }
        if(flag || a_index == -1) {
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
	}
}