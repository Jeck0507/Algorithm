#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n;
	cin >> n;

	vector<int> a(n);
	vector<int> s(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 1; i < n; i++) {
		int insert_point = i;
		int insert_val = a[i];
		for (int j = i - 1; j >= 0; j--) {
			if (a[j] < a[i]) {
				insert_point = j + 1;
				break;
			}
			if (j == 0) {
				insert_point = 0;
			}
		}
		for (int j = i; j > insert_point; j--) {
			a[j] = a[j - 1];
		}
		a[insert_point] = insert_val;
	}
	s[0] = a[0];

	for (int i = 1; i < n; i++) {
		s[i] = s[i - 1] + a[i];
	}
	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum = sum + s[i];
	}

	cout << sum;
}