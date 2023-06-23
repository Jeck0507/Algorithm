#include <iostream>
#include <vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> v(n);
	if (n == 0) {
		cout << "0" << endl;
		return 0;
	}

	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;

		v[i] = temp;
	}
	float mean = round(n * 0.15);

	sort(v.begin(), v.end());

	float ans = 0;

	for (int i = mean; i < n - mean; i++) {
		ans += v[i];
	}
	ans /= (n - mean * 2);
	
	ans = round(ans);

	cout << ans << endl;
}