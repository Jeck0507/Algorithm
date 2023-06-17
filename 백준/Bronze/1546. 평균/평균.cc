#include <iostream>

using namespace std;

int main() {
	int n, sum = 0, max = 0;
	int a[1001];
	float ans;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
		sum += a[i];
	}

	ans = sum * 100.0 / max / n;

	cout << ans << endl;



}