#include <iostream>
#include <vector>
using namespace std;
int t, n;
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        vector<int> vt(n);
        for (int j = 0; j < n; j++) {
            cin >> vt[j];
        }

        long long ans = 0;

        for (int k = 0; k < n; k++) {
            for (int j = k + 1; j < n; j++) {
                ans += gcd(vt[k], vt[j]);
            }
        }
        cout << ans << "\n";
    }
}
