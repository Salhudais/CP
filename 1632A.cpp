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
	long long test; cin >> test;
	while (test--) {
        int n; cin >> n;
        string word; cin >> word;
        if(word.size() <= 1) cout << "YES" << endl;
        else{
            if(word.size() == 2 && word[0] == word[1]){
                cout << "NO" << endl;
            }else if(word.size() == 2 && word[0] != word[1]) cout << "YES" << endl;
            else cout << "NO" << endl;
            /*
            int p1 = word.size() % 2 == 0 ? (word.size() / 2) -1 : (word.size() / 2);
            int p2 = word.size() % 2 == 0 ? (word.size() / 2)  : ceil(word.size() / 2);
            while(p1 >= 0 && p2 < word.size()) {
                if(word[p1] == word[p2]) break;
                if(p1 - 1 >= 0 && word[p2] == word[p1 - 1]) break;
                if(p2 + 1 < word.size() && word[p1] == word[p2 + 1]) break;
                p1--;
                p2++;
            }
            if(p1 < 0 && p2 >= word.size()) cout << "YES" << endl;
            else cout << "NO" << endl; */
        }
	}
}