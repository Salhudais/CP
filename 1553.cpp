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
15:00 -> So I figured out how to sum the elements but the issue 
        remains to be that it takes too long on huge elements
        primarily because we're going element by element at 10+
        increments

TakeAways:
        All Interesting elements end with 9 and n ending with 9 + 1
        is always smaller. 
        Therefore we can extend this to n + 1 / 10 where if we take it
        case by case then:
        (9+1) / 10 -> 1
        (99 + 1) / 10 -> 10
        So on and so forth 

Analysis:
        Again, A lot of these obervations I'm making, But I can't seme
        to extend all of these into general rules for the solution
        


*/


int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	long long test; cin >> test;
	while (test--) {
        long long n, count = 0; cin >> n;
        cout << ((n +1) / 10) << endl;
	}
}