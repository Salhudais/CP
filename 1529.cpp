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
    My intuition was: So long as there is a minimum and a maximum,
    we can always delete something. 
    And since it's looking for the maximum amount of numbers we can delete
    We can look to sort the array and do 1 to 1 comparisons.

    I'm looking at the editorial and it does make sense that if there
    is a smallest element, everything but itself will be deleted 
    if we're concerned with the maximum amount

    I suppose I got really lucky with relying solely on sorting

TakeAways:

For the maximum amount of deletions based on any subsequence we can
pick, as long as there is a minimum; then it'll be the count of all 
other elements - the occurence of the minimum

Analysis:

I'd say I solved it pretty well whilst relying on sorting. But
I did have a hunch that as long as there was a minimum, we can replace
the deleted elements with the minimum because it'll never get deleted


*/

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	long long test; cin >> test;
	while (test--) {
        int n; cin >> n;
        vector<int> m(n);
        int mn = INT_MAX; int count = 0;
        for(int i = 0; i < n; i++) {
            cin >> m[i];
            if(m[i] < mn) mn = i;
        }
        for(auto i : m) {
            if(i > mn) count++; 
        }
        cout << count << endl;
        /*
        int n; cin >> n;
        vector<int> m(n);
        for(int i = 0; i < n; i++) {
            cin >> m[i];
        }
        sort(m.begin(), m.end());
        // So long that there is at least 1 max and 1 min, we can rest assured that
        // There's at least one element to be eliminated

        int count = 0;
        for(int i = 1; i < n; i++) {
            if(m[i] > m[i-1]) {
                count++;
                m[i] = m[i-1];
            }
        }
        cout << count << endl;
        */

	}
}