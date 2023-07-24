#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false); cin.tie(0);
  int tc;
  cin >> tc;
  while (tc--) {
    string s;
    cin >> s;
    vector<int> cnt(10);
    for (auto c : s) cnt[c - '0']++;
    int mx = *max_element(cnt.begin(), cnt.end());
    if (mx == 4) cout << -1;
    else if (mx == 3) cout << 6;
    else cout << 4;
    cout << '\n';
  }
}