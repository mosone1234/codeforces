#include <bits/stdc++.h>

using namespace std;

int main () {
  int n;
  cin >> n;
  vector<int> numbers;
  //int res = n;
  while (n-- > 0) {
    int a;
    cin >> a;
    numbers.push_back(a);
  }
  sort(numbers.rbegin(), numbers.rend());
  int n1 = numbers.size() - 1;
  int j = 0;
  int a = 0;
  int b = 0;
  vector<int> a1;
  vector<int> b1;
  while (j <= n1) {
    if (b > a) {
      a += numbers[n1];
      a1.push_back(numbers[n1]);
      if (n1 == j) {
        if (a >= b) {
          b1.push_back(numbers[n1]);
        }
        break;
      }
      n1--;
    } else {
      b += numbers[j];
      b1.push_back(numbers[j]);
      j++;
    }
  }
  cout << b1.size() << endl;
  return 0;
}
