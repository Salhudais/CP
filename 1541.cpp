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
1:00 -> for any interval over [1, n], we can "rotate" the array
        over by 1, keeping the last element;
11:00 -> Just realized they want the optimal solution for the minimum
        amount of moves to ensure all cats are in different positions
TakeAways:
    If the parity is even, then we need at least n moves
    if the parity is odd, we need n + 1 where we first tackle 
    the first 3


Analysis:
I seem to misunderstand and misread the questions often, jumping the gun without
considering the problem in it's entirety. 


*/

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	long long test; cin >> test;
	while (test--) {
        int n; cin >> n;
        vector<int> m(n);
        for(int i = 0; i < n; i++) m[i] = i + 1;
        if(n % 2 == 0) {
            for(int i = 0; i < n-1; i += 2) {
                int temp = m[i];
                m[i] = m[i+1];
                m[i+1] = temp;
            }
        }else{
            swap(m[0], m[2]); swap(m[1], m[2]);
            for(int i = 3; i < n-1; i += 2) {
                swap(m[i], m[i+1]);
            }
        }
        for(auto i : m) cout << i << " ";
        cout << endl;
    }
}