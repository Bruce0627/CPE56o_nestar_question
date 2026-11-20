// CPE 56123 | UVa 11942 | Lumberjack Sequencing
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
    cout << "Lumberjacks:\n";
    while (tests--) {
        array<int,10> lengths;
        for (int &length : lengths) cin >> length;
        bool increasing = true, decreasing = true;
        for (int i = 1; i < 10; ++i) {
            increasing &= lengths[i-1] < lengths[i];
            decreasing &= lengths[i-1] > lengths[i];
        }
        cout << (increasing || decreasing ? "Ordered\n" : "Unordered\n");
    }
}
