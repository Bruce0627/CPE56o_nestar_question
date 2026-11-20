// CPE 56143 | UVa 673 | Parentheses Balance
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

bool balanced(const string &line) {
    stack<char> brackets;
    for (char c : line) {
        if (c == '(' || c == '[') brackets.push(c);
        else if (c == ')' || c == ']') {
            char opening = c == ')' ? '(' : '[';
            if (brackets.empty() || brackets.top() != opening) return false;
            brackets.pop();
        }
    }
    return brackets.empty();
}
int main() {
    int tests; cin >> tests;
    string line; getline(cin,line);
    while (tests--) {
        getline(cin,line);
        cout << (balanced(line) ? "Yes\n" : "No\n");
    }
}
