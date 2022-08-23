#include <bits/stdc++.h>

using namespace std;

int main () {
  string word;
  cin >> word;
  string d;
  for (int i = 0; i < (int)word.size(); ++i) {
    if (word[i] == 'h' || word[i] == 'e' || word[i] == 'l' || word[i] == 'o') {
      d += word[i];
    }
  }
  vector<char> vouls = { 'h', 'e', 'l', 'l', 'o' };
  string cad;
  int ini = 0;
  for (int j = 0; j < (int)vouls.size(); ++j) {
    for (int i = ini; i < (int)d.length(); i++) {
      if (vouls[j] == d[i]) {
        cad += d[i];
        ini = i + 1;
        break;
      }
    }
  }
  if (cad == "hello") {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
