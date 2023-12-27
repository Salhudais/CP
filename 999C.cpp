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

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
        int n, k; string str;
        cin >> n >> k >> str;
        for(int i = 0; i <= 25; i++) {
            for(int j = 0; j < n && k; j++) {
                if(str[j] == 'a' + i) {
                str[j] = '0';
                k--;
                }
            }      
        }
        for(int i = 0; i < str.size(); i++) {
            if(str[i] != '0') cout << str[i];
        }
}