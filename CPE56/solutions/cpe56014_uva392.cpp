// CPE 56014 | UVa 392 | Polynomial Showdown
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
    int coefficient;
    while (cin >> coefficient) {
        bool first = true;
        for (int power = 8; power >= 0; --power) {
            if (power != 8) cin >> coefficient;
            if (!coefficient) continue;
            if (first) { if (coefficient < 0) cout << '-'; }
            else cout << (coefficient < 0 ? " - " : " + ");
            int magnitude = abs(coefficient);
            if (!power || magnitude != 1) cout << magnitude;
            if (power) cout << 'x';
            if (power > 1) cout << '^' << power;
            first = false;
        }
        if (first) cout << 0;
        cout << '\n';
    }
}
