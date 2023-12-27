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

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	long long test; cin >> test;
	while (test--) {
        long w,h, k; cin >> w >> h >> k;
        int res = 1;
        while(w % 2 == 0) {
            w /= 2;
            res *= 2;
        }
        while(h % 2 == 0) {
            h /= 2;
            res *= 2;
        }
        res >= k ? cout << "YES" << endl : cout << "NO" << endl;
        /*if(w % 2 == 0 && h % 2 == 0) {
            if(w * h >= k) cout << "YES" << endl;
        }else {
            if(w % 2 == 0 || h % 2 == 0) {
                int o, e;
                if(w % 2 == 0) {
                    e = w; o = h;
                }else{e = h; o = w;}
                int count = 1;
                while(e % 2 == 0)  {
                    e /= 2;
                    count *= 2;
                }
                if(count >= k) cout << "YES" << endl;
                else cout << "NO" << endl;
            }else{
                1 >= k ? cout << "YES" << endl : cout << "NO" << endl;
            }
            */
	}
}