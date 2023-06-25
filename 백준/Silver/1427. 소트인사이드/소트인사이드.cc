#include<iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;
	vector<int> a(str.size());

	for (int i = 0; i < str.length(); i++) {
		a[i] = stoi(str.substr(i, 1));
	}

	for (int i = 0; i < str.length(); i++) {
		int max = i;
		for (int j = i+1; j < str.length(); j++) {
			if (a[j] > a[max]) {
				max = j;
			}
		}
		if (a[i] < a[max]) {
			int temp = a[i];
			a[i] = a[max];
			a[max] = temp;
		}
	}
	for (int i = 0; i < a.size(); i++) {
		cout << a[i];
	}
}