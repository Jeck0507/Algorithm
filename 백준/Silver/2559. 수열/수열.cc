#include <algorithm>
#include <iostream>

using namespace std;
int psum[100001], ret = -1000000;
int main() {
    int n, k;

    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        int temp;
        cin >> temp;

        psum[i] = psum[i - 1] + temp;
    }
    for (int i = k; i <= n; i++) {
        ret = max(ret, psum[i] - psum[i - k]);
    }
    cout << ret << endl;
}