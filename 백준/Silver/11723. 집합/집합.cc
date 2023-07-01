#include <string.h>

#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    int arr[21] = {0};
    cin >> n;
    int x;
    string order;
    for (int i = 0; i < n; i++) {
        cin >> order;

        if (order == "add") {
            cin >> x;
            if (arr[x] == 0) {
                arr[x] = 1;
            }
        } else if (order == "remove") {
            cin >> x;
            if (arr[x] == 1) {
                arr[x] = 0;
            }
        } else if (order == "check") {
            cin >> x;
            if (arr[x] == 0) {
                cout << 0 << "\n";
            } else {
                cout << 1 << "\n";
            }
        } else if (order == "toggle") {
            cin >> x;
            if (arr[x] == 1) {
                arr[x] = 0;
            } else {
                arr[x] = 1;
            }
        } else if (order == "all") {
            for (int j = 1; j <= 20; j++) {
                arr[j] = 1;
            }
        } else if (order == "empty") {
            for (int k = 0; k < sizeof(arr) / 4; k++) {
                arr[k] = 0;
            }
        }
    }
}