#include <bits/stdc++.h>

using namespace std;

int main () {
	int wordsNumber;
	cin >> wordsNumber;
	while (wordsNumber-- > 0) {
		string word;
		cin >> word;
		if (word.length() > 10) {
			cout << word.at(0) << word.length() - 2 << word.at(word.length() - 1) << endl;
		} else {
			cout << word << endl;
		}
	}
}
