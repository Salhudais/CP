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
// Thou must shower

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, k; cin >> n >> k;
    string word; cin >> word;
    int count = 0;
    vector<int> m(word.length());
    for(int i = 0; i < word.size(); i++ ) {
        count += word[i] - 'a' + 1;
        m[i] = count;
    }
    for(int i = 0; i < k; i++) {
        int left, right; cin >> left >> right;
        if(left >= 0 && left <= right && right <= m.size()) {
             cout << m[right - 1] - m[left - 1] + word[left - 1] - 'a' + 1 << endl;
        }
    }
    return 0;
}