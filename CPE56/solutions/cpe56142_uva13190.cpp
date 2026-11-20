// CPE 56142 | UVa 13190 | Rockabye Tobby
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
    int tests; cin >> tests;
    while (tests--) {
        int n,k; cin >> n >> k;
        vector<string> names(n);
        vector<int> period(n);
        using Event = pair<int,int>;
        priority_queue<Event,vector<Event>,greater<Event>> events;
        for (int i = 0; i < n; ++i) {
            cin >> names[i] >> period[i];
            events.emplace(period[i],i);
        }
        while (k--) {
            auto [time,id] = events.top();
            events.pop();
            cout << time << ' ' << names[id] << '\n';
            events.emplace(time+period[id],id);
        }
    }
}
