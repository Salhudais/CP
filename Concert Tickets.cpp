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
#include <map>

using namespace std;

typedef long long ll; // Shortens long long to just ll
typedef vector<double> vec;
typedef vector<long long> vi;


long long n, m;
void solve() {
    cin >> n >> m;
    multiset<int> s;
    for(int i = 0; i < n; i++) {
        int c; cin >> c;
        s.insert(c);
    }
    for(int i = 0; i < m; i++) {
        int num; cin >> num;
        auto bound = s.upper_bound(num);
        if(bound == s.begin()) {
            cout << -1 << "\n";
        }else {
            cout << *(--bound) << "\n";
            s.erase(bound);
        }
    }
    // First Attempt
    // Not sure why map does not work here.
    
    /*
    map<long long, long long> tickets;
    for(long long i = 0; i < n; i++) {
        long long num; cin >> num; tickets[num]++;
    }
    for(long long i = 0; i < m; i++) {
        long long c; cin >> c;
        auto it = tickets.lower_bound(c);
        if(it == tickets.end() && it == tickets.begin()) cout << -1 << "\n";
        else {
            // If it == number
            if(it -> first == c && it -> second > 0) {
                cout << it -> first << "\n";
                it -> second--;
            }else {
                // if it == beginning == number
                if(it == tickets.begin() && it -> second > 0) {
                    cout << it -> first << "\n";
                    it -> second--;
                // if it somewhere in middle 
                }else if(it != tickets.begin() || it == tickets.end()) {
                    auto ne = --it;
                    if(ne -> second > 0) {
                        cout << ne -> first << "\n";
                        ne -> second--;
                    }else {
                        cout << -1 << "\n";
                    }
                }else {
                    cout << -1 << "\n";
                }
            }
        } */
}
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}