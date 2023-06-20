#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b, c;
	int mul;
	int count[10] = {};
	cin >> a >> b >> c;

	mul = a * b * c;

	string str = to_string(mul);

	for (int i = 0; i < str.length(); i++) {
		count[str[i] - '0']++;
	}

	for (int i = 0; i < 10; i++) {
		cout << count[i] << endl;
	}
}