#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		bool flag = true;
		for (int j = 1; j < str.length(); j++) {
			for (int k = 0; k < j; k++) {
				if (str[j] != str[j - 1] && str[j] == str[k]) {
					flag = false;
					break;
				}
			}

		}
		if (flag) {
			cnt++;
		}
	}
	cout << cnt;

}