// CPE 56061 | UVa 446 | Kibbles n" Bits "n" Bits "n" Bits"
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
        int a,b; char op;
        cin >> hex >> a >> op >> b;
        cout << bitset<13>(a) << ' ' << op << ' ' << bitset<13>(b)
             << " = " << (op == '+' ? a+b : a-b) << '\n';
    }
}
