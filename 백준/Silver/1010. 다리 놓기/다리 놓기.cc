#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int main() {

    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        int N, M, res = 1, tmp = 1;
        std::cin >> N >> M;

        for (int i = M; i > M - N; --i) {
            res = res * i;
            res = res / tmp++;
        }

        cout << res << "\n";
    }
    return 0;
}