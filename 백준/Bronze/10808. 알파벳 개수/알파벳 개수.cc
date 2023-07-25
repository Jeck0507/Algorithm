#include <algorithm>
#include <iostream>
#include <map>
using namespace std;
int cnt[26];

int main() {
    string str;
    cin >> str;

    for (char a : str) {
        cnt[a - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        cout << cnt[i] << " ";
    }
}