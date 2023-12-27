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
    int n,m,k; cin >> n >> m >> k;
    vector<int> desired(n);
    for(int i = 0; i < n; i++) {
        cin >> desired[i];
    }
    vector<int> s(m);
    for(int i = 0; i < m; i++){
        cin >> s[i];
    }
    int count = 0;
    sort(s.begin(), s.end());
    sort(desired.begin(), desired.end());
    int p1 = 0;
    for(int i = 0; i < m && p1 < n; i++) {
        if(s[i] > desired[p1] + k) {
            p1++; i--;
        }else if(s[i] < desired[p1] - k) continue;
        else {
            p1++;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
