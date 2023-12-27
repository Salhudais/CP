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
	long long test; cin >> test;
	while (test--) {
        int n; string word;
        cin >> n >> word;
        int p1 = 0, p2 = 0, aCount = 0, bCount = 0;
        for(p2; p2 < word.size(); p2++) {
            if(word[p2] == 'a') aCount++;
            else bCount++;
            if(p2 != 0 && (p2 + 1) % 2 == 0 && aCount == bCount) {
                break;
            }else if(p2 != 0 && p2 + 1 % 2 == 0) {
                if(word[p1] == 'a') {
                    aCount--; p1++;
                }else {
                    bCount--; p2--;
                }
            } 
	    }
        cout << aCount << " " << bCount << endl;
        if(aCount != bCount) {
            cout << "-1 -1" << endl;
        }else{
            cout << p1 + 1 << " " << p2 + 1 << endl;
        }
    }
}