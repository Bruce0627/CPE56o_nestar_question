// CPE 56132 | UVa 12820 | Cool Word
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
    int tc = 0;
    for (int n; cin >> n; ) {
        int cool = 0;
        while (n--) {
            string word; cin >> word;
            array<int,26> frequency{};
            for (char letter : word) ++frequency[letter-'a'];
            set<int> counts;
            bool unique = true;
            for (int count : frequency)
                if (count && !counts.insert(count).second) unique = false;
            cool += unique && counts.size() >= 2;
        }
        cout << "Case " << ++tc << ": " << cool << '\n';
    }
}
