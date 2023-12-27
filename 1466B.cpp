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

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
    int test; cin >> test;
    while(test--) {
        //Always better to increase by 1?
        // Or account for both cases
        int n, positive, result = 0; cin >> n >> positive;
        for(int i = 1; i < n; i++) {
            int num; cin >> num;
            if(num == positive) {
                positive = num + 1;
                result++;
            }else if(num > positive) {
                positive = num;
                result++;
            }
        }
        cout << result + 1<< endl;
    }
}
/// xd/?
// Missing 1 somewhere....
// 

