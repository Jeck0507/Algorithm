#include <iostream>
#include <vector>

using namespace std;

static vector<vector<int>> a;
static vector<bool> visited;
static bool arrive;
void dfs(int now, int depth);


int main() {
	int n, m;

	arrive = false;

	cin >> n >> m;

	a.resize(n);
	visited = vector<bool>(n, false);

	for (int i = 0; i < m; i++) {
		int s, e;
		cin >> s >> e;
		a[s].push_back(e);
		a[e].push_back(s);
	}
	for (int i = 0; i < n; i++) {
		dfs(i, 1);
		if (arrive) {
			break;
		}
	}

	if (arrive) {
		cout << 1 << endl;
	}
	else {
		cout << 0 << endl;
	}
}

void dfs(int now, int depth) {
	if (depth == 5 || arrive) {
		arrive = true;
		return;
	}
	visited[now] = true;

	for (int i : a[now]) {
		if (!visited[i]) {
			dfs(i, depth + 1);
		}
	}
	visited[now] = false;
}