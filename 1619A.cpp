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


TakeAways:


Analysis:



*/

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	long long test; cin >> test;
	while (test--) {
        string word; cin >> word;
        if(word.size() % 2 != 0) {
            cout << "NO" << endl;
        }else{
            int half = word.size() /2, p1 = 0, p2 = half;
            while(p1 < half && p2 < word.size()) {
                if(word[p1] != word[p2]) {
                    break;
                }
                p1++; p2++;
            }
            if(p1 == half && p2 == word.size()) {
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
	}
}