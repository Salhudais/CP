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

        First Column is 1 + the ith odd number
        First Row is 1 + the ith odd number

        I can't seem to search in one direction 
        without ignoring the other

        but I can narrow it down to the dimensions of the
        box they create


TakeAways:


Analysis:



*/

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	long long test; cin >> test;
	while (test--) {
        long long  n; cin >> n;
        int Horizontal = 2, Vertical = 4;
        int x = 1, y = 2;
        int current_dimension = 1;
        int vFactor = 3;
        int flag = 0;
        // Have to search in both directions?
        while(true && n != 1) {
            if(Horizontal <= n && Horizontal + current_dimension >= n) {
                flag = 1;
                break;
            }
            if(Vertical >= n && Vertical - current_dimension <= n) {
                flag = 2;
                break;
            }
            Horizontal += vFactor;
            Vertical += vFactor + 2;
            vFactor += 2;
            current_dimension++;
            x++;
            y++;
        }

        if(n == 1) cout << "1 1" << endl;
        else if(flag == 1) {
            for(int i = 0; i + Horizontal <= current_dimension + Horizontal; i++) {
                if(i + Horizontal == n) {
                    cout << i + 1 << " " << max(x,y) << endl;
                } 
            }
        }else if(flag == 2){
            for(int i = 0; Vertical - i >= Vertical - current_dimension; i++) {
                if(Vertical - i == n) {
                     cout << max(x,y) <<  " "  << i + 1 <<  endl;
                } 
            }
        }
	}
}