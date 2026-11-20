// CPE 56042 | UVa 10035 | Primary Arithmetic
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
    for (long long a,b; cin >> a >> b && (a || b); ) {
        int carry = 0, count = 0;
        while (a || b) {
            carry = (a%10 + b%10 + carry >= 10);
            count += carry;
            a /= 10; b /= 10;
        }
        if (!count) cout << "No carry operation.\n";
        else cout << count << (count == 1 ? " carry operation.\n" : " carry operations.\n");
    }
}
