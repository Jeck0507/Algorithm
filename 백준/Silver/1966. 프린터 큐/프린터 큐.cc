#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int t;
	int n, m;
	int importance;
	int cnt;

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		cnt = 0;
		cin >> n >> m;

		priority_queue<int> pq;
		queue<pair<int, int>> q;

		for (int j = 0; j < n; j++) {
			cin >> importance;
			q.push({ j, importance });
			pq.push(importance);
		}

		while (!q.empty()) {
			int location = q.front().first;
			int value = q.front().second;
			q.pop();

			if (pq.top() == value) {
				pq.pop();
				++cnt;
				if (m == location) {
					cout << cnt << endl;
					break;
				}
			}

			else q.push({ location, value });
		}
	}

	return 0;
}