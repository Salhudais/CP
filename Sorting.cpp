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
#include <queue>

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
*/
//Generating subsets recursively
vi subset; int n = 3;

bool chosen[4];
vi permutation;

/*
    col1 -> every column must contain 1 queen
    diag1 -> top right to bottom left diagonals
    diag2 -> bottom left to top right diagonals
    \ && / diagonals  
*/
vi col(8), diag1(64), diag2(64);
int counter = 0;
void search(int y) {
    if(y == 8) {
        counter++;
        return;
    }
    for(int x = 0; x < 8; x++) {
        if(col[x] || diag1[x+y] || diag2[x-y+n-1]) continue;
        col[x] = diag1[x+y] = diag2[x-y+n-1] = 1;
        search(y+1);
        col[x] = diag1[x+y] = diag2[x-y+n-1] = 0;
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

void bubble(vi& v) {
    for(int i = 0; i < v.size(); i++) {
        for(int j = 0; j < v.size() -1 ; j++) {
            if(v[j] > v[j+1]) swap(v[j], v[j+1]);
        }
    }
}

struct point {
    int x, y;
    bool operator<(const point &p) {
        if(x == p.x) return y < p.y;
        else return x < p.x;
    }
};
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
    vi v = {4,3,2,1,6,7,3,5,2,10,11};   
    vector<pair<int, int>> m = {{200, 1000},{300, 500}, {300, 400}};
    sort(v.begin(), v.end());
    int a = 0, b = v.size() - 1;
    /**/
    // Jumps
    v.erase(unique(v.begin(), v.end()), v.end());
    for(auto i : v) cout << i << endl;