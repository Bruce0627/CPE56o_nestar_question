// CPE 56041 | UVa 12468 | Zapping
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
    for (int a,b; cin >> a >> b && a != -1; ) {
        int distance = abs(a-b);
        cout << min(distance, 100-distance) << '\n';
    }
}
