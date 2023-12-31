#include <iostream>
#include <vector>

using namespace std;

void DFS(int num, int jarisu);
bool isPrime(int num);
static int n;

int main() {
    cin >> n;
    DFS(2, 1);
    DFS(3, 1);
    DFS(5, 1);
    DFS(7, 1);
}

void DFS(int num, int jarisu) {
    if (jarisu == n) {
        if (isPrime(num)) {
            cout << num << "\n";
        }
        return;
    }

    for (int i = 1; i < 10; i++) {
        if (i % 2 == 0) {
            continue;
        }
        if (isPrime(num * 10 + i)) {
            DFS(num * 10 + i, jarisu + 1);
        }
    }
}

bool isPrime(int number) {
    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}