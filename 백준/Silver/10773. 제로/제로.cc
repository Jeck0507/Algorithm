#include<iostream>
#include<algorithm>
#include <stack>
using namespace std;

int main() {
	int n;
	int temp;

	cin >> n;
	stack<int> st;
	int ans = 0;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (temp == 0) {
			st.pop();
		}
		else {
			st.push(temp);
		}
	}

	while(!st.empty()){
		ans += st.top();
		st.pop();
	}

	cout << ans;
}