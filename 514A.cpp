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
    string test,test2; cin >> test;
    // If not 9
    // Actually prob easier to deal with it as a string?
    int horizontal;
    test2 = test;
    for(long long int i  = test.length() -1; i >= 0; i--) {
        horizontal = 9 - (test[i] - '0');
        test[i] =  horizontal + '0';
        if(i == 0 && test2[i] == '9') test2[i] = test2[i]; else
        if(test[i] < test2[i]) {
            test2[i] = test[i];
        }
    }
    cout << test2 << endl;
}
