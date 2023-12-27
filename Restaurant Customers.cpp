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
#include <queue>

using namespace std;

typedef long long ll; // Shortens long long to just ll
typedef vector<double> vd;
typedef vector<int> vi;

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
void solve() {
    int n; cin >> n;

    // Not accounting for off by one errors
    // code is also too long
    /*vector<pair<long, long>> v(n);
    for(int i =0; i < n; i++) {
        long long  a, b; cin >> a >> b;
        v[i] = {a,b};
    }
    sort(v.begin(), v.end(), [](auto a, auto b) {
        return a.first < b.first;
    });
    for(auto i : v) cout << i.first << " " << i.second << endl;
    long long maxcount = 1, localMax = v[0].second, current = 1;
    long long difference = v[0].second;
    for(int i = 1; i < n; i++) {
        
        if(v[i].first > localMax) {
            current--;
        }else if(v[i].first > difference) current--;

        if(v[i].first < localMax || v[i].first < difference) {
            current++;
        }
        maxcount < current ? maxcount = current : maxcount;
        if(localMax < v[i].first) {
            localMax = v[i].second;
            if(v[i].first > localMax) {
            current--;
            }else if(v[i].first > difference) current--;
        }
        difference = v[i].second;
        cout << current << " After" << endl;
    }
    cout << maxcount; */
}
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n;
	cin >> n;
	vector<pair<int, int>> times;
	for (int i = 0; i < n; i++) {
		int start, end;
		cin >> start >> end;
		times.push_back({start, 1});
		times.push_back({end, -1});
	}

	sort(times.begin(), times.end());

	int curr_ppl = 0;
	int max_ppl = 0;
	for (const pair<int, int> &t : times) {
		curr_ppl += t.second;
		max_ppl = max(max_ppl, curr_ppl);
	}

	cout << max_ppl << endl;
}
