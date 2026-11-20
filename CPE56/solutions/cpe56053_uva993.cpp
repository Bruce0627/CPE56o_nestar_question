// CPE 56053 | UVa 993 | Product of digits
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
        int n; cin >> n;
        if (n < 10) { cout << n << '\n'; continue; }
        string digits;
        for (int d = 9; d >= 2; --d)
            while (n % d == 0) { digits += char('0'+d); n /= d; }
        reverse(digits.begin(), digits.end());
        cout << (n == 1 ? digits : "-1") << '\n';
    }
}
