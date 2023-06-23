#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b, v, cnt = 0, ans = 0;

	cin >> a >> b >> v;
	if ((v - a) % (a - b) == 0) {
		ans = (v - a) / (a - b);
	}
	else {
		ans = (v - a) / (a - b) + 1;
	}
	cout << ans+1;
}