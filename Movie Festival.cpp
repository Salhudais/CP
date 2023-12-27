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
typedef vector<double> vd;
typedef vector<int> vi;

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
int maximum = INT_MIN;
void solve(vector<pair<int,int>> m, int index, int current
           ,int& start, int& ending) {
    if(index == m.size() -1 ) return;
    // If next element is greater
    int startOne = start, endingOne = ending;
    if(m[index].first > ending) {
        startOne = m[index].first, endingOne = m[index].second;
        maximum = max(current + 1,maximum);
    }else{
        maximum = max(current,maximum);
    }
    solve(m, index + 1, current, startOne,endingOne);
    solve(m, index + 1, current, start, ending);
    
}
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
    int n, curr = -1, total = 0; cin >> n;
    vector<pair<int, int>> m(n);
    for(int i = 0; i < n; i++) {
        int a,b; cin >> a >> b;
        m[i] = {b,a};
    }
    sort(m.begin(), m.end());
    for(auto i : m) {
        if(i.second >= curr) {
            curr = i.first;
            total++;
        }
    }
    cout << total;
    return 0;
}
