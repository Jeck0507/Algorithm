#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
	int n;

	cin >> n;

	int count = 1, start_index = 1, end_index = 1, sum = 1;

	while (end_index != n) {
		if (sum == n) {
			count++;
			end_index++;
			sum = sum + end_index;
		}
		else if (sum > n) {
			sum = sum - start_index;
			start_index++;
		}
		else {
			end_index++;
			sum = sum + end_index;
		}
	}
	cout << count << endl;
}
