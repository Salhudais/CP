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
1. 11:00 Case by case: if A & F and B align on the same row
	or column, we subtract greater from lesser + 2 to
	shift directions away from F.
	If They don't, then just the difference of x2 - x1 + y2 - y1
	Given that there's multiple ways of rerouting on the same
	amount of steps
2. 22:00 Didn't account for when it's not directly in the way,
	I'm starting to think I should've just plotted it and went with
	a brute-force approach instead?

3. 29:00 I'm a little confused about how to go about iterating from A to B though
	while counting the steps and avoiding F efficiently

4. Ditching that approach, I'm pretty sure I can get to an answer without
outright simulating it


5: Probably 20 minutes later -> Went back to the same idea; Ironically, I simulated some
scenarios out on paper and they all matched what I ended up doing, I guess I just didn't prove
it rigorously enough? Idk
TakeAways:

Shortest Path between to points is x2 - x1 + y2 - y1. Given that a point is in the middle of
them either along the x axis or the y axis and it affects the shortest path possible, then
we add 2 to evade it.

Analysis:

I didn't necessarily formalize down to how the editorial describes it as only caring for the one
shortest path and then extending it on to checking min(P,Q) < R < max(P,Q).
Maybe next time, if I'm feeling really strongly about an approach, I should try to formalize it
and rely less on simulations via 2d arrays
*/

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	long long test; cin >> test;
	while (test--) {
		int a1, a2, b1, b2, f1, f2;
		cin >> a1 >> a2 >> b1 >> b2 >> f1 >> f2;

		// Suppose there wasn't an obstacle?
		int result = abs(b1 - a1) + abs(b2 - a2);

		// If there was, we'd only need 2 extra steps to avoid it
		// So check the following:
		// If F is between A and B, or at least, the shortest path
		// between A & B since we don't care about other paths either

		if ((a1 == b1 && a1 == f1)) {
			if (min(a2, b2) < f2 && f2 < max(a2, b2)) {
				result += 2;
			}
		}
		else if (a2 == b2 && a2 == f2) {
			if (min(a1, b1) < f1 && f1 < max(a1, b1)) {
				result += 2;
			}
		}
		cout << result << endl;








	}
}