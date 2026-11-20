// CPE 56101 | UVa 880 | Cantor Fractions
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
    for (long long n; cin >> n; ) {
        long long k = (sqrt(8.0L*n + 1)-1)/2;
        if (k*(k+1)/2 < n) ++k;
        long long denominator = n-k*(k-1)/2;
        cout << k+1-denominator << '/' << denominator << '\n';
    }
}
