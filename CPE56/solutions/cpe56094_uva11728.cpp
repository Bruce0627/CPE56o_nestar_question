// CPE 56094 | UVa 11728 | Alternate Task
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
    constexpr int limit = 1000;
    array<int,limit+1> sum{}, answer;
    answer.fill(-1);
    for (int d = 1; d <= limit; ++d)
        for (int n = d; n <= limit; n += d) sum[n] += d;
    for (int n = 1; n <= limit; ++n)
        if (sum[n] <= limit) answer[sum[n]] = n;
    int tc = 0;
    for (int query; cin >> query && query; )
        cout << "Case " << ++tc << ": " << answer[query] << '\n';
}
