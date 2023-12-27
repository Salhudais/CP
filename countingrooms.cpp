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
typedef vector<int> vi;
typedef vector<long long > vl;
typedef vector<string> vs;
typedef vector<double> vd;
//Macros -> Certain strings in the code will change pre-compilation
#define F first
#define S Second 
#define PB push_back
#define MP make_pair
// Include parameters
/*
    #define REP(i,a,b) for (int i = a; i <= b; i++)
*/

//Generating subsets recursively
vi subset; int n = 3;
void search(int k) {
    if(k == n + 1) {
        for(auto i : subset) cout << i;
        cout << endl;
        return;
    }else {
        subset.push_back(k);
        search(k + 1);
        subset.pop_back();
        search(k + 1);
        // 123
        // 12
        // 13
        // 1
        // 23
        // 2
        // 3
        //
    }
}
bool chosen[4];
vi permutation;
void search() {
    if(permutation.size() == n) {
        for(auto i : permutation) cout << i;
        cout << endl;
        return;
    }else {
        for(int i = 1; i <= n; i++) {
            if(chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(i);
            search();
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}
int fibonacci(int n) {
    if(n == 0 || n == 1) return n;
    int term = fibonacci(n-1) + fibonacci(n - 2);
    return term;
}
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
void solve(int n) {
    int m; cin >> m;
    vector<vector<char>> r;
    for(int i = 0; i < n; i++) {
        vector<char> temp(m);
        for(int j = 0; j < m; j++) {
            cin >> temp[i];
        }
        r.push_back(temp);
    }
    // ######

}
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    solve(n);
    return 0;
    
}