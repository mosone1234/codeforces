#include <bits/stdc++.h>

using namespace std;

int main () {
  // vector<int> numbers = { 10, 10, 58, 31, 63, 40, 76 };
  // vector<int> numbers = { 15, 33, 44, 11, 22 };
  vector<int> numbers;
  int number;
  cin >> number;
  while (number --> 0) {
    int vec;
    cin >> vec;
    numbers.push_back(vec);
  }
  vector<int> aux = numbers;
  sort(numbers.begin(), numbers.end());
  int min = 0;
  for (int i = (int)aux.size() - 1; i >= 0 ; --i) {
    if (aux[i] == numbers[0]) {
      min = i + 1;
      break;
    }
  }
  int max = 0;
  for (int i = 0; i < (int)aux.size() ; ++i) {
    if (aux[i] == numbers[(int)aux.size() - 1]) {
      max = i + 1;
      break;
    }
  }
  int jumpMin, jumpMax = 0;
  if (max > min) {
    jumpMin = aux.size() - min;
    jumpMax = (max - 2);
    cout << jumpMin + jumpMax << endl;
  } else {
    jumpMin = aux.size() - min;
    jumpMax = (max - 1);
    cout <<  jumpMin + jumpMax << endl;
  }
  return 0;
}
