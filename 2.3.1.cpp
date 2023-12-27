#include <vector>
#include <iostream>
#include <ostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <limits>
#include <unordered_map>
#include <climits>
#include <unordered_set>
#include <set>
#include <bitset>

using namespace std;

typedef long long ll; // Shortens long long to just ll
typedef vector<int> vi;
typedef vector<long long > vl;
typedef vector<string> vs;
typedef vector<double> vd;
//Macros -> Certain strings in the code will change pre-compilation
#define F first
#define S Second 
#define PB push_back
#define MP make_pair
// Include parameters
/*
    #define REP(i,a,b) for (int i = a; i <= b; i++)
*/

//Generating subsets recursively
vi subset; int n = 3;

bool chosen[4];
vi permutation;

/*
    col1 -> every column must contain 1 queen
    diag1 -> top right to bottom left diagonals
    diag2 -> bottom left to top right diagonals
    \ && / diagonals  
*/
vi col(8), diag1(64), diag2(64);
int counter = 0;
void search(int y) {
    if(y == 8) {
        counter++;
        return;
    }
    for(int x = 0; x < 8; x++) {
        if(col[x] || diag1[x+y] || diag2[x-y+n-1]) continue;
        col[x] = diag1[x+y] = diag2[x-y+n-1] = 1;
        search(y+1);
        col[x] = diag1[x+y] = diag2[x-y+n-1] = 0;
    }
}
int fibonacci(int n) {
    if(n == 0 || n == 1) return n;
    int term = fibonacci(n-1) + fibonacci(n - 2);
    return term;
}
int factorial(int n) {
    int count = 1;
    for(int i = 2; i <= n; i++) {
        count *= i;
    }
    return count; 
}
int nChooseR(int n, int r){
    return (factorial(n) / (factorial(r) * factorial(n - r)));
}

/*
    x & y -> produces bit values where x[i] && y[i] both equal 1
    (10110)(22)
   &(11010)(26)
   --------------
   10010(18)

   Check if x is odd or even
   x & 1:
        -> if 0, else odd
    (1000)(8)
   &(0001)(1)
   -----------
    0000

    Check if x is divisible by 2^k
    if x & (2^k -1) == 0 -> true
    else false
    k = 2 -> 2^k = 4
    (11000)(24) 
   &(00011)(3)
   --------------
   000000 -> true
   ------------------------------------------------------------------
    OR
    x | y produces number where either number has one in bits x[i]
    or y[i]
    (10110)(22)
   |(11010)(26)
   ---------------
    (11110)(30)
------------------------------------------------------------------
    XOR
    x ^ y produces number if and only if 1 of either numbers have 1's
    (10110)(22)
   ^(11010)(26)
   --------------
     01100(12)
------------------------------------------------------------------
    NOT
    ~x inverts all bits
    ~x = -x-1
    ~29 = -30
------------------------------------------------------------------
    Bit shifts
    x << k shifts k zero bits to x
    x >> k removes last k bits to the number
    14 << 2 = 56
    1110 << 2 ---> 111000
    49 >> 3 = 6
    110001 >> 3 ---> 110 
------------------------------------------------------------------
    Bit Masks
    1 << k
    implies that there is a one bit in position k
    Allows us to access specific bits
    x & (1 << k) == 0 if the bit at x[i] is 1

*/

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
    int c = INT_MAX - 30;
    for(int i = 31; i >= 0; i--) {
        c ^= 1 << i;
    }
    int x = (1 << 1) | (1 << 3) | (1 << 4) | (1 << 8);
    int y = (1 << 3) | (1 << 6) | (1 << 8) | (1 << 9);
    int z = x | y;
    for(int i = 0; i < 32; i++) {
        if(z & (1 << i)){
            cout << i << endl;
        }
    }
    bitset<10> s, a ,b;
    s[1] = 1;
    s[3] = 1;
    s[4] = 1;
    s[7] = 1;
    cout << s.count() << endl;
    bitset<10> c = a&b;
    bitset<10> d = a|b;
    bitset<10> e = a ^ b;


}