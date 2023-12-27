#include <vector>
#include <iostream>
#include <ostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <limits>
#include <unordered_map>
#include <climits>

using namespace std;

typedef long long ll; // Shortens long long to just ll
typedef vector<double> vec;


/*
MetaCognitive Thoughts here:


TakeAways:


Analysis:



*/
bool palindrome(string n) {
    int p1 = 0, p2 = n.size() -1;
    while(p1 < p2) {
        if(n[p1] != n[p2]) return false;
        p1++; p2--;
    }
    return true;
}
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	string n; cin >> n;
    int current = INT_MIN, count = 0;
    for(int i = 1; i < n.size(); i++) {
        if(n[i-1] == n[i]) {
            count++;
            current = max(current, count + 1);
        }
        else {
            count = 0;
        }
    }
    current > 0 ? cout << current : cout << 1;
}