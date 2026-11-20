// CPE 56034 | UVa 11309 | COUNTING CHAOS
#include <algorithm>
#include <array>
#include <bitset>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

int main() {
    int tests; cin >> tests;
    while (tests--) {
        int h,m; char colon; cin >> h >> colon >> m;
        int time = 60*h + m;
        while (true) {
            time = (time + 1) % 1440;
            string digits = to_string(100 * (time/60) + time%60);
            if (equal(digits.begin(), digits.end(), digits.rbegin())) break;
        }
        cout << setfill('0') << setw(2) << time/60 << ':' << setw(2) << time%60 << '\n';
    }
}
