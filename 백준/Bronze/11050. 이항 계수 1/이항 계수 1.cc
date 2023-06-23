#include <iostream>
#include <vector>
using namespace std;

int fac(int num) {
    if (num == 0) {
        return 1;
    } else {
        return num * fac(num - 1);
    }
}
int main() {
    int n, r;

    cin >> n >> r;

    cout << fac(n) / (fac(r) * fac((n - r)));
}