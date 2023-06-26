#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[1001];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);

    cout << a[n - k] << endl;
}