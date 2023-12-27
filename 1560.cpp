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
        If a is even and b is odd, then immediately output -1
        
        via observation;
        1 points to every element from 1-10
        2 people -> 1 points to 2
        4 people -> 1 points to 3
        6 people -> 1 points to 4

        actually the 1 is kind of irrelevant tbh

        if a = 6, b = 2
        
        we trace b = 2 + 1 + 1
        we trace a = b + 1 + 1


        How to verify if it's correct

        n always points to n / 2 so I suppose we can use that as an anchor

TakeAways:


Analysis:

Given that the numbers to the left of 1 between a and b is n-2 / 2
We can say that the total amount is |a-b| * 2

To check for any invalid answers, just make sure a b c < n




*/

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	long long test; cin >> test;
	while (test--) {
        int a, b, c;
        cin >> a >> b >> c;
        int closest = min(a,b);
        int cmax = max(a,b);
        while(closest > 1) {
            closest--;
            cmax--;
        }
        closest--; cmax--;
        int newMax = (max(closest, cmax)) * 2;
        //Check first if a & b valid

        if(newMax / 2 + min(a,b) == max(a,b) && max(a,b) <= newMax && c <= newMax) {
            if(c > newMax / 2) {
                cout << c - newMax / 2 << endl;
            }else if(c < newMax / 2) {
                cout << c + newMax / 2 << endl;
            }else{
                cout << newMax << endl;
            }
        }else {
            cout << -1 << endl;
        }
	}
}