// CPE 56114 | UVa 10098 | Generating Fast
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
        string word; cin >> word;
        sort(word.begin(), word.end());
        do { cout << word << '\n'; }
        while (next_permutation(word.begin(), word.end()));
        cout << '\n';
    }
}
