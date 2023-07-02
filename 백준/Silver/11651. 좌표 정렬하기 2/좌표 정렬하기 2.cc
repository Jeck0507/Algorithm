#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;



int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	vector<vector<int>> vt(n, vector<int>(2));
	for (int i = 0; i < n; i++) {
		cin >> vt[i][1];
		cin >> vt[i][0];
	}

	sort(vt.begin(), vt.end());

	for (int i = 0; i < n; i++) {
		cout << vt[i][1] << " " << vt[i][0] << "\n";
	}
}