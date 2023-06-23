#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int ret = 1;
    int max = 1;
    int add = 6;

    while (1) {
        if (n <= max) break;

        max += add;
        add += 6;
        ++ret;
    }

    cout << ret;
    return 0;
}