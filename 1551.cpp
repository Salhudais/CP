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
        if string is aa, then the first must be red and the other
        green, so we need to keep track of the occurrences of 
        characters. If the occurrence is odd such as 3, we can separate
        1 green and 1 red and 1 unpainted

        if all the characters are unique, then we can return 
        it's size / 2;
        if all the characters are unique, but the size is odd
        then it's floor(size / 2);

        I guess we can first get the occurrences.
        Then we iterate through the occurences and count 
        which is even, in which case we increment our count by
        1.
        We do another iteration to count the ones that are now 1
        and try to even them out

        Not sure why that took my longer than 30 minutes but I wasn't
        paying attention to which string/vector i was iterating
TakeAways:
Not sure what to take away from the problem tbh, was/is super straight forward


Analysis:

Solution uses memeset, which I guess is just 0 or 1 variation of a
frequency list

Either way, same approach


*/

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	long long test; cin >> test;
	while (test--) {
        vector<int> m(26, 0);
        int count = 0, countOdd = 0;
        string str; cin >> str;
        for(int i = 0; i < str.size(); i++) {
            m[(str[i] - 'a')]++;
        }
        for(int i = 0; i < m.size(); i++) {
            if(m[i] == 1) {
                countOdd++;
            }else{
                if(m[i] > 1) {
                    count++;
                }
            }
        }
        cout << count + countOdd / 2 << endl;

	}
}