// CPE 56111 | UVa 530 | Binomial Showdown
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
    for (long long n,k; cin >> n >> k && (n || k); ) {
        k = min(k,n-k);
        long long answer = 1;
        for (long long i = 1; i <= k; ++i) answer = answer*(n-i+1)/i;
        cout << answer << '\n';
    }
}
