// CPE 56081 | UVa 10018 | Reverse and Add
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
        long long n; cin >> n;
        int steps = 0;
        string digits;
        do {
            digits = to_string(n);
            reverse(digits.begin(), digits.end());
            n += stoll(digits);
            ++steps;
            digits = to_string(n);
        } while (!equal(digits.begin(), digits.end(), digits.rbegin()));
        cout << steps << ' ' << n << '\n';
    }
}
