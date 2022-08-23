#include <bits/stdc++.h>

using namespace std;

int main () {
  string firstWord, secondWord;
  cin >> firstWord >> secondWord;
  transform(firstWord.begin(), firstWord.end(), firstWord.begin(), ::tolower);
  transform(secondWord.begin(), secondWord.end(), secondWord.begin(), ::tolower);
  if (firstWord.compare(secondWord) == 0) {
    cout << 0 << endl;
  } else {
    if (firstWord.compare(secondWord) > 0) {
      cout << 1 << endl;
    } else {
      cout << -1 << endl;
    }
  }
  return 0;
}
