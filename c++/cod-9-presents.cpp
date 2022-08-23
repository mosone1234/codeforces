#include <bits/stdc++.h>

using namespace std;

int main () {
  int n, n1, i;
  cin >> n;
  n1 = n;
  vector<int> friends;
  vector<int> aux;
  while (n-- > 0) {
    cin >> i;
    friends.push_back(i);
  }
  map<int,int> m;
  for (int j = 0; j < (int)friends.size(); j++) {
    m.insert(pair<int, int>(friends[j], j+1));
  }
  int max = 0;
  for (auto x : m) {
    max++;
    cout << x.second << (max < n1 ? " " : "");
  }
  return 0;
}
