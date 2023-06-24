#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());

	int res = 0;
	int i = 0;
	int j = n - 1;
	
	for (int k = 0; k < n; k++) {
		long find = v[k];
		int i = 0;
		int j = n - 1;

		while (i < j) {
			if (v[i] + v[j] == find) {
				if (i != k && j != k) {
					res++;
					break;
				}
				else if (i == k) {
					i++;
				}
				else if (j == k) {
					j--;
				}
			}
			else if (v[i] + v[j] < find) {
				i++;
			}
			else {
				j--;
			}
		}
	}
	cout << res << endl;
}
