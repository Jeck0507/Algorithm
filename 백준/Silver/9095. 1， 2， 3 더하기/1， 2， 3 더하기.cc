#include <iostream>
using namespace std;

int t, n;
int cnt = 0;
void solve(int sum) {
    if (sum == n) {
        cnt++;
        return;
    }
    if (sum > n) return;
    for (int i = 1; i <= 3; i++) {
        solve(sum + i);
    }
}

int main() {
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;
        solve(0);
        cout << cnt << endl;
        cnt = 0;
    }

    return 0;
}