#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[100001];
    int dp[100001];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ret = a[0];
    dp[0] = a[0];

    for (int i = 1; i < n; i++) {
        dp[i] = max(dp[i - 1] + a[i], a[i]);
        ret = max(dp[i], ret);
    }
    cout << ret;
}