// CPE 56024 | UVa 10921 | Find The Telephone
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
    const string keypad = "22233344455566677778889999";
    for (string line; getline(cin, line); ) {
        for (char &c : line) if (c >= 'A' && c <= 'Z') c = keypad[c - 'A'];
        cout << line << '\n';
    }
}
