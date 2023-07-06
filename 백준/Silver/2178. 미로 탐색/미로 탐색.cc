#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

static int dx[] = {0, 1, 0, -1};
static int dy[] = {1, 0, -1, 0};
static int a[101][101];
static bool visited[101][101] = {false};
static int n, m;

void bfs(int i, int j) {
    queue<pair<int, int>> que;
    que.push(make_pair(i, j));

    while (!que.empty()) {
        int now[2];
        now[0] = que.front().first;
        now[1] = que.front().second;
        que.pop();

        visited[i][j] = true;

        for (int k = 0; k < 4; k++) {
            int x = now[0] + dx[k];
            int y = now[1] + dy[k];

            if (x >= 0 && y >= 0 && x < n && y < m) {
                if (a[x][y] != 0 && !visited[x][y]) {
                    visited[x][y] = true;
                    a[x][y] = a[now[0]][now[1]] + 1;
                    que.push(make_pair(x, y));
                }
            }
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++) {
            a[i][j] = s[j] - '0';
        }
    }
    bfs(0, 0);
    cout << a[n - 1][m - 1] << endl;
}
