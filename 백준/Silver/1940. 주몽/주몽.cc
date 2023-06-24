#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	cin >> n;
	cin >> m;
	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());

	int cnt = 0;
	int i = 0;
	int j = n - 1;


	while (i < j) {
		if (v[i] + v[j] < m) {
			i++;
		}
		else if (v[i] + v[j] > m) {
			j--;
		}
		else {
			i++;
			j--;
			cnt++;
		}
	}
	cout << cnt << "\n";
}
