#include <iostream>
#include <deque>
using namespace std;

typedef pair<int, int> Node;

int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, L;
	cin >> n >> L;
	deque<Node> mydeque;
	for (int i = 0; i < n; i++) {
		int now;

		cin >> now;

		while (mydeque.size() && mydeque.back().first > now) {
			mydeque.pop_back();
		}
		mydeque.push_back(Node(now, i));

		if (mydeque.front().second <= i - L) {
			mydeque.pop_front();
		}

		cout << mydeque.front().first << " ";
	}


}