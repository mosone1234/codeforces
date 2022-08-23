#include <bits/stdc++.h>

using namespace std;

int main() {
  string number;
  cin >> number;
  if (number.length() == 1) {
    if (atoi(number.c_str()) == 4 || atoi(number.c_str()) == 7) {
      cout << "YES" << endl;
    } else {
      double d1 = atof(number.c_str()) / 4;
      double d2 = atof(number.c_str()) / 7;
      int i1 = atoi(number.c_str()) / 4; 
      int i2 = atoi(number.c_str()) / 7;
      if (d1 == (double)i1 || d2 == (double)i2) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    }
  } else {
    if (number.length() == 2) {
      if (atoi(number.c_str()) == 47 || atoi(number.c_str()) == 74) {
        cout << "YES" << endl;
      } else {
        double d1 = atof(number.c_str()) / 4;
        double d2 = atof(number.c_str()) / 7;
        double d3 = atof(number.c_str()) / 47;
        int i1 = atoi(number.c_str()) / 4; 
        int i2 = atoi(number.c_str()) / 7;
        int i3 = atoi(number.c_str()) / 47;
        if (d1 == (double)i1 || d2 == (double)i2 || d3 == (double)i3) {
          cout << "YES" << endl;
        } else {
          cout << "NO" << endl;
        }
      }
    } else {
      if (number.length() == 3) {
        string c1, c2, c3, ns1;
        c1 += number[0];
        c2 += number[1];
        c3 += number[2];
        ns1 = c1 + c2;
        int is1 = atoi(ns1.c_str());
        if (is1 == 47 || is1 == 74) {
          cout << "YES" << endl;
        } else {
          double d1 = atof(number.c_str()) / 4;
          double d2 = atof(number.c_str()) / 7;
          double d3 = atof(number.c_str()) / 47;
          int i1 = atoi(number.c_str()) / 4; 
          int i2 = atoi(number.c_str()) / 7;
          int i3 = atoi(number.c_str()) / 47;
          if (d1 == (double)i1 || d2 == (double)i2 || d3 == (double)i3) {
            cout << "YES" << endl;
          } else {
            cout << "NO" << endl;
          }
        }
      } else {
        double d1 = atof(number.c_str()) / 4;
        double d2 = atof(number.c_str()) / 7;
        int i1 = atoi(number.c_str()) / 4; 
        int i2 = atoi(number.c_str()) / 7;
        if (d1 == (double)i1 || d2 == (double)i2) {
          cout << "YES" << endl;
        } else {
          cout << "NO" << endl;
        }
      }
    }
  }
}

