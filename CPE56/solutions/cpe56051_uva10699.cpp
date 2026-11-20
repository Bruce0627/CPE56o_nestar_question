// CPE 56051 | UVa 10699 | Count the factors
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
    for (int n; cin >> n && n; ) {
        int remaining = n, count = 0;
        for (int p = 2; p <= remaining / p; ++p) if (remaining % p == 0) {
            ++count;
            do { remaining /= p; } while (remaining % p == 0);
        }
        cout << n << " : " << count + (remaining > 1) << '\n';
    }
}
