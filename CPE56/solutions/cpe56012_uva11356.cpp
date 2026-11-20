// CPE 56012 | UVa 11356 | Dates
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
    const vector<string> months = {"January","February","March","April","May","June",
        "July","August","September","October","November","December"};
    const int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int tests; cin >> tests;
    for (int tc = 1; tc <= tests; ++tc) {
        int year, day, offset; char dash; string month;
        cin >> year >> dash;
        getline(cin, month, '-');
        cin >> day >> offset;
        int m = find(months.begin(), months.end(), month) - months.begin();
        day += offset;
        while (true) {
            bool leap = year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
            int limit = days[m] + (m == 1 && leap);
            if (day <= limit) break;
            day -= limit;
            if (++m == 12) { m = 0; ++year; }
        }
        cout << "Case " << tc << ": " << setfill('0') << setw(4) << year << '-'
             << months[m] << '-' << setw(2) << day << '\n';
    }
}
