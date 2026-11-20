// CPE 56121 | UVa 10327 | Flip Sort
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
    for (int n; cin >> n; ) {
        vector<int> values(n);
        for (int &value : values) cin >> value;
        int inversions = 0;
        for (int i = 0; i < n; ++i)
            for (int j = i+1; j < n; ++j) inversions += values[i] > values[j];
        cout << "Minimum exchange operations : " << inversions << '\n';
    }
}
