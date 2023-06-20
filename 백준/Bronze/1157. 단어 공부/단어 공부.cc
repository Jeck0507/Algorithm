#include <iostream>

using namespace std;
int a[26];
int cnt = 0;

int main() {
	string str;
	int cnt = 0;

	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] < 97) {
			a[str[i] - 65]++;
		}
		else {
			a[str[i] - 97]++;
		}
	}
	int max = 0, maxIndex = 0;

	for (int i = 0; i < 26; i++) {
		if (a[i] > max) {
			max = a[i];
			maxIndex = i;
		}
	}

	for (int i= 0; i < 26; i++) {
		if (max == a[i]) {
			cnt++;
		}
	}

	if (cnt > 1) {
		cout << "?";
	}
	else {
		cout << (char)(maxIndex+65);
	}


}