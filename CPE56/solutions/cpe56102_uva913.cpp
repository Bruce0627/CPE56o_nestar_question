// CPE 56102 | UVa 913 | Joana and the Odd Numbers
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
        long long row = (n+1)/2;
        cout << 6*row*row-9 << '\n';
    }
}
