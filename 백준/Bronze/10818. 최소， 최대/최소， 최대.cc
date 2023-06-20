#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	int max = -1000000, min = 100000;
	cin >> n;

	vector<int> s(n+1);

	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	
	for (int i = 0; i < n; i++) {
		if (s[i] > max) {
			max = s[i];
		}
		if (s[i] <= min){
			min = s[i];
		}
	}
	cout << min << " " << max;
}