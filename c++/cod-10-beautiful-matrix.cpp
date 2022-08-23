#include <bits/stdc++.h>

using namespace std;

int main () {
  int matrix[5][5];
  int pi = 0;
  int pj = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> matrix[i][j];
      if (matrix[i][j] == 1) {
        pi = i + 1;
        pj = j + 1;
      }
    }
  }
  int p1 = pi == 3 ? 0 : pi > 3 ? pi - 3 : 3 - pi;
  int p2 = pj == 3 ? 0 : pj > 3 ? pj - 3 : 3 - pj;
  cout << p1 + p2 << endl;
  return 0;
}
