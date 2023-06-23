#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, idx, temp;

    n = 3;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        a[i] = temp;
    }

    for (int i = 0; i < n - 1; i++) {
        idx = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[idx]) {
                idx = j;
            }
        }
        temp = a[i];
        a[i] = a[idx];
        a[idx] = temp;
    }

    cout << a[1];
}