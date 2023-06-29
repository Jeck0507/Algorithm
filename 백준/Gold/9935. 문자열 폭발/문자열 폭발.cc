#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	string str;
	string boom;
	string temp;

	cin >> str >> boom;

	for (int i = 0; i < str.length(); i++) {
		temp += str[i];
		if (temp.length() >= boom.length()) {
			bool flag = true;
			for (int j = 0; j < boom.length(); j++) {
				if (temp[temp.length() - boom.length()+j] != boom[j]) {
					flag = false;
					break;
				}
			}
			if (flag) {
				temp.erase(temp.end() - boom.length(), temp.end());
			}
		}
	
	}

	if ((temp.empty())) {
		cout << "FRULA" << endl;
	}
	else {
		cout << temp << endl;
	}
}