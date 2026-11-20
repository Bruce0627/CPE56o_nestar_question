// CPE 56011 | UVa 272 | TEX Quotes
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
    bool opening = true;
    for (char c; cin.get(c); ) {
        if (c != '"') cout << c;
        else {
            cout << (opening ? string(2, char(96)) : "''");
            opening = !opening;
        }
    }
}
