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
typedef vector<int> vec;


/*
MetaCognitive Thoughts here:
        On a quick glance, it seems like we cannot distribute candies
        if the sqrt(sum of candies) is not equal to the size
        of the array.

        we also don't care how he distributes it and k is at most
        <= n

        but I'm ensure of what numbers to pick to distribute?
        The ones that are largest?
        But that'd shrink my list down to only 2 of the largest
        Maybe set the sqrt(sum) as the base and look for the ones that deviate most from it?





TakeAways:
        Given an Array of integers where we must pick least amount
        of numbers to even the numbers out,we need at most
        the amount of numbers where a > sum/sizeofarray

Analysis:
        What the fuck, TLDR
        I overcomplicated it so hard. I think somewhere in the back of
        my head I thought about also finding out which elements exactly
        where going to be filled. Instead, it's just finding any number of 
        elements in which we can use to even out the array
        Any element that is already equal to the sum/n can be left alone
        any element that is less than sum/n obviously can't be taken
        so we're left with only 1 option...
        



*/

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	long long test; cin >> test;
	while (test--) {
        int diffSum = 0, sum = 0, n; cin >> n;
        vector<int> m(n);
        for(int i = 0; i < n; i++) {
            cin >> m[i];
            sum += m[i];
        }
        if(sum % n != 0) cout << "-1" << endl;
        else{
            int count = 0;
            for(int i = 0; i < n; i++) {
                if(m[i] > sum / n) count++;
            }
            cout << count << endl;
        }
    }        
}