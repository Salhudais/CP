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
        I don't think the size of the board is relevant 
        here because I can just make comparisons outright
        as though they were right above each other

        I tried to look for some sort of connection
        between the size of the board and the number
        of elements relative to the size of pawns in both
        arrays

        But I got nowhere

        I can, I suppose, manually search for them?


TakeAways:

        Not really sure what to take away
        prob should read the editorial for any insight


        First Approach is basically mine

        God damn i wish I knew what maximum matching was

        Might want to revisit this in the future



Analysis:



*/

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	long long test; cin >> test;
	while (test--) {
        int n; cin >> n;
        string enemy; cin >> enemy;
        string greg; cin >> greg;

        int count = 0;
        // Need to know if my pawns went through;
        // Give Preference to left, then right;

        // If at least not the first, prioritize 
        // i - 1 over anything else
        for(int i = 0; i < greg.size(); i++) {
            if(greg[i] == '0') continue;
            if(i > 0 && enemy[i - 1] == '1') {
                enemy[i-1] = '5';
                count++;
            // If enemy is just 0, then take it 
            }else if(enemy[i] == '0') {
                enemy[i] = '5';
                count++;
            // Haven't handled for the left side where 
            // If there is a 1, we always check left first
            // if we haven't already taken it with right
            }else if(i + 1 < greg.size() && enemy[i+1] =='1') {
                enemy[i+1] = '5';
                count++;
            }
        }
        cout << count << endl;

	}
}