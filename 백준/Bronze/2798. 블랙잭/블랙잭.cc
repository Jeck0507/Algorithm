#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int main() {
	int n, m;
	int max = 0;
	int temp;
	cin >> n >> m;

	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		v[i] = temp;
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				temp = v[i] + v[j] + v[k];

				if (temp > max && m >= temp) {
					max = temp;
				}
			}
		}
	}

	cout << max;
}
