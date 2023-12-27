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

const int maxn = 2e5 + 10;
int n, x , p[maxn], i, j , ans;
bool have_gandola_yet[maxn];
void solve() {
    cin >> x >> n;
    for(int i = 0; i < n; i++) cin >> p[i];
    sort(p, p + n);
    i = 0, j = n - 1;
    while(i < j) {
        if(p[i] + p[j] > x) {
            --j;
        }else {
            ++ans;
            have_gandola_yet[i] = have_gandola_yet[j] = true;
            ++i;
            --j;

        }
    }
    for(int i = 0; i < n; i++) {
        ans += have_gandola_yet[i] == false;
    }
    cout << ans; 
}
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;

}
