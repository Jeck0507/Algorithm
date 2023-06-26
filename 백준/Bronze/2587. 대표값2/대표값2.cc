#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a(5);
    int cnt = 0;
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
        cnt += a[i];
    }
    sort(a.begin(), a.end());

    cout << cnt / 5 << endl;
    cout << a[2] << endl;
}