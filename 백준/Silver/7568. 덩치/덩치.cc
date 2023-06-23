#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, cnt;

    cin >> n;

    vector<int> x(n);
    vector<int> y(n);

    for (int i = 0; i < n; i++) {
        cin >> x[i];
        cin >> y[i];
    }

    for (int i = 0; i < n; i++) {
        cnt = 0;
        for (int j = 0; j < n; j++) {
            if (x[i] < x[j] && y[i] < y[j]) {
                cnt++;
            }
        }
        cout << cnt + 1 << " ";
    }
}