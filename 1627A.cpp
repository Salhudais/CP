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

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	long long test; cin >> test;
	while (test--) {
        int n, m, r, c;
        cin >> n >> m >> r >> c;
        int b = -1;
        for(int i = 1; i < n; i++) {
            for(int j = j; j < m; j++) {
                char d; cin >> d;
                if(d == 'W') continue;
                if(i == r && j == d) {
                    b = 0;
                }
                if((i == r || j ==d) && b != 0) b = 1;

                if(b == -1) b = 2;
                cout << b;
            }
        /*
        vector<vector<char>> f(n, vector<char>(m));
        bool b = false;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> f[i][j];
                if(f[i][j] == 'B') b = true;
            }
        }
        char el = f[r-1][c-1];
        if(el == 'W' && b) {
            bool t = false;
            for(int i = 0; i < m; i++) {
            
                if(f[r-1][i] == 'B') {
                    t = true;
                    break;
                }
            }
            for(int i = 0; i < n; i++) {
                if(f[i][c-1] == 'B') {
                    t = true;
                    break;
                }
            }
            if(t == true) cout << 1 << endl;
            else cout << 2 << endl;
        }else{
            if(el == 'B') cout << 0 << endl;
            else cout << -1 << endl;
        } */

	}
}