// CPE 56023 | UVa 11576 | Scrolling Sign
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
        int length, words; cin >> length >> words;
        string previous; cin >> previous;
        int total = length;
        for (int i = 1; i < words; ++i) {
            string next; cin >> next;
            int overlap = length;
            while (previous.compare(length - overlap, overlap, next, 0, overlap) != 0)
                --overlap;
            total += length - overlap;
            previous = next;
        }
        cout << total << '\n';
    }
}
