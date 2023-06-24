#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int checkArr[4];
int myArr[4];
int checkSecret = 0;
void Add(char c);
void Remove(char c);



int main() {
	int s, p;

		cin >> s >> p;
		int res = 0;
		string a;
		cin >> a;

		for (int i = 0; i < 4; i++) {
			cin >> checkArr[i];
			if (checkArr[i] == 0) {
				checkSecret++;
			}
		}
		for (int i = 0; i < p; i++) {
			Add(a[i]);
		}
		if (checkSecret == 4) {
			res++;
		}

		for (int i = p; i < s; i++) {
			int j = i - p;
			Add(a[i]);
			Remove(a[j]);

			if (checkSecret == 4) {
				res++;
			}
		}
		cout << res << "\n";
}

void Add(char c) {
	switch (c) {
	case 'A':
		myArr[0]++;
		if (myArr[0] == checkArr[0]) {
			checkSecret++;
		}
		break;
	case 'C':
		myArr[1]++;
		if (myArr[1] == checkArr[1]) 
			checkSecret++;
		break;
	case 'G':
		myArr[2]++;
		if (myArr[2] == checkArr[2]) 
			checkSecret++;
		break;
	case 'T':
		myArr[3]++;
		if (myArr[3] == checkArr[3]) 
			checkSecret++;
		break;
	}
}




void Remove(char c) {
	switch (c){
	case 'A':
		if (myArr[0] == checkArr[0]) 
			checkSecret--;
		myArr[0]--;
		break;
	case 'C':
		if (myArr[1] == checkArr[1])
			checkSecret--;
		myArr[1]--;
		break;
	case 'G':
		if (myArr[2] == checkArr[2]) 
			checkSecret--;
		myArr[2]--;
		break;
	case 'T':
		if (myArr[3] == checkArr[3]) 
			checkSecret--;
		myArr[3]--;
		break;
	}
}