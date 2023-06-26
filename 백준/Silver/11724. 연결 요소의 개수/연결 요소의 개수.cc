#include <iostream>
#include <vector>

using namespace std;

static vector<vector<int>> a;
static vector<bool> visited;

void DFS(int v) {
    if (visited[v]) {
        return;
    }
    visited[v] = true;

    for (int i : a[v]) {
        if (visited[i] == false) {
            DFS(i);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    a.resize(n + 1);
    visited = vector<bool>(n + 1, false);

    for (int i = 0; i < m; i++) {
        int s, e;
        cin >> s >> e;
        a[s].push_back(e);
        a[e].push_back(s);
    }
    int cnt = 0;

    for (int i = 1; i < n + 1; i++) {
        if (!visited[i]) {
            cnt++;
            DFS(i);
        }
    }
    cout << cnt << endl;
}