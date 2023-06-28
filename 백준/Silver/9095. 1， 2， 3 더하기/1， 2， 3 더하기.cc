#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;

    int dp[11];

    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 4;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        for (int j = 3; j <= n; j++) {
            dp[j] = dp[j - 1] + dp[j - 2] + dp[j - 3];
        }
        cout << dp[n - 1] << endl;
    }
}