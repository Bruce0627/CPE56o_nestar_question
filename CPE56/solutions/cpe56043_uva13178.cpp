// CPE 56043 | UVa 13178 | Is it multiple of 3?
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
        // Concatenation preserves the sum of residues modulo 3.
        cout << (n*(n+1)/2 % 3 == 0 ? "YES\n" : "NO\n");
    }
}
