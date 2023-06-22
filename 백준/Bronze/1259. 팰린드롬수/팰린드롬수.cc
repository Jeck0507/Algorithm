#include <iostream>
#include <vector>
using namespace std;


int main() {

	string ch;
	while (1) {
		cin >> ch;
		if (ch == "0") { break; 
		}

		int no = 0;
		for (int i = 0; i < ch.length() / 2; i++) {

			if (ch[i] != ch[ch.length() - i - 1]) {
				no++;
				break;
			}
		}
		if (no == 0) { cout << "yes" << endl; 
		}
		else { cout << "no" << endl; 
		}
	}
}
