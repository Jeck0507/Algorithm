#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int main() {
	int a, b, c;

	while (true)
	{
		cin >> a >> b >> c;


		if (a != 0 && b != 0 && c != 0) {

			if (a * a > b * b && a * a > c * c) {
				if (a * a == b * b + c * c) {
					cout << "right" << endl;
				}
				else {
					cout << "wrong" << endl;
				}
			}
			else if (b * b > a * a && b * b > c * c) {
				if (b * b == a * a + c * c) {
					cout << "right" << endl;
				}
				else {
					cout << "wrong" << endl;
				}
			}
			else if (c * c > a * a && c * c > b * b) {
				if (c * c == a * a + b * b) {
					cout << "right" << endl;
				}
				else {
					cout << "wrong" << endl;
				}
			}
			else {
				cout << "wrong" << endl;
			}
		}
		else {
			break;
		}
	}

}
