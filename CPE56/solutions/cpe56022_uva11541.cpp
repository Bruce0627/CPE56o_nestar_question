// CPE 56022 | UVa 11541 | Decoding
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
    for (int tc = 1; tc <= tests; ++tc) {
        string encoded; cin >> encoded;
        cout << "Case " << tc << ": ";
        for (size_t i = 0; i < encoded.size(); ) {
            char letter = encoded[i++];
            int count = 0;
            while (i < encoded.size() && isdigit(encoded[i]))
                count = 10 * count + encoded[i++] - '0';
            cout << string(count, letter);
        }
        cout << '\n';
    }
}
