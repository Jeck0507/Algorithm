#include <iostream>
#include <cmath>
using namespace std;
int cnt = 0;

void hanoi(int n, char A, char B, char C) {
    // hanoi(3,A,B,C)
    if (n == 1) {
        cout << A << " " << C << "\n";
        cnt++;

    }

    else {
        hanoi(n - 1, A, C, B);
        cnt++;
        cout << A << " " << C << "\n";
        hanoi(n - 1, B, A, C);
        cnt++;

    }
}


int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int num;
    cin >> num;
    cout << (int)pow(2, num) - 1 << "\n";
    hanoi(num, '1', '2', '3');
    return 0;
}