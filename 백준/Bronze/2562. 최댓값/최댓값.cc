#include <iostream>
using namespace std;

int main() {
	int a[9];
	int maxIndex;
	int max = -1;
	for (int i = 0; i < 9; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < 9; i++) {
		if (a[i] > max) {
			max = a[i];
			maxIndex = i + 1;
		}
	}
	cout << max << "\n";
	cout << maxIndex << "\n";
}