// CPE 56131 | UVa 642 | Word Amalgamation
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

string key(string word) {
    sort(word.begin(), word.end());
    return word;
}
int main() {
    map<string,vector<string>> dictionary;
    for (string word; cin >> word && word != "XXXXXX"; )
        dictionary[key(word)].push_back(word);
    for (auto &[signature, words] : dictionary) sort(words.begin(), words.end());
    for (string word; cin >> word && word != "XXXXXX"; ) {
        const auto match = dictionary.find(key(word));
        if (match == dictionary.end()) cout << "NOT A VALID WORD\n";
        else for (const auto &result : match->second) cout << result << '\n';
        cout << "******\n";
    }
}
