#include <bits/stdc++.h>

using namespace std;

int main () {
  string word;
  cin >> word;
  transform(word.begin(), word.end(), word.begin(), ::tolower);
  for (char x: word) {
    if (x == 'a' || x == 'o' || x == 'y' || x == 'e' || x == 'u' || x == 'i') {
    } else {
      cout << '.' <<  x;
    }
  }
  return 0;
}
