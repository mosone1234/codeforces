#include <bits/stdc++.h>

using namespace std;

int main () {
  string numbers; 
  cin >> numbers;
  sort(numbers.begin(), numbers.end());
  int n = numbers.length(); 
  for (int i = 0; i < n; i++) {
    if (numbers[i] == '+') {
    } else {
      cout << numbers[i] << (i != n - 1 ? "+" : "");
    }
  }
  return 0;
}
