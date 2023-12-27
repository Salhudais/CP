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
#include <unordered_set>
#include <set>

using namespace std;

typedef long long ll; // Shortens long long to just ll
typedef vector<double> vec;


/*
MetaCognitive Thoughts here:


TakeAways:


Analysis:



*/
int factorial(int n) {
    int count = 1;
    for(int i = 2; i <= n; i++) {
        count *= i;
    }
    return count; 
}
int nChooseR(int n, int r){
    return (factorial(n) / (factorial(r) * factorial(n - r)));
}
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	string n; cin >> n;
    int count = n.size();
    int product = 1;
    unordered_map<char, int> m;
    for(auto i :n) m[i]++;
    for(auto [key, val] : m) {
        product *= nChooseR(count, val);
        count -= val;
    }
    cout << product << endl;
    unordered_set<string> l = {n};
    for(auto g : l) {
        for(int i = 0; i < n.size(); i++) {
            string example = g;
            for(int j = 0; j < n.size(); j++) {
                swap(example[i], example[j]);
                l.insert(example);
            }
        }
        for(int i = n.size() - 1; i >= 0; i--) {
            string example = g;
            for(int j = n.size() - 1; j >= 0; j--) {
                swap(example[i], example[j]);
                l.insert(example);
            }
        }
    }
    vector<string> r;
    for(auto i : l) r.push_back(i);
    sort(r.begin(), r.end());
    for(auto i : r) cout << i << endl;

}