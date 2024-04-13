#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vd = vector<double>;
using vii = vector<pii>;
using vll = vector<pll>;
using vs = vector<string>;

using vvb = vector<vb>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using vvd = vector<vd>;

string s;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> s;

  auto ans = ll{0};
  for (auto i = 0; i < s.length() - 3; ++i) {
    if (s.substr(i, 4) == "DKSH"s) {
      ++ans;
    }
  }

  cout << ans;

  return 0;
}