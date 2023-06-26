#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    int x, y;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        cout << v[i].first << ' ' << v[i].second << '\n';
    }
}