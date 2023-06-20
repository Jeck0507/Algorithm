#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		int temp = 0;
		int a;

		cin >> a;

		temp = a * a;
		sum += temp;
	}

	cout << sum % 10;
}