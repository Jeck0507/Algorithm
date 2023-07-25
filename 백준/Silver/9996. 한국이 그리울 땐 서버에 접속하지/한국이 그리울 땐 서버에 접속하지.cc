#include <algorithm>
#include <iostream>

using namespace std;
int n;
string ptn;
int main() {
    cin >> n;
    cin >> ptn;
    int pos = ptn.find('*');

    string pre = ptn.substr(0, pos);
    string suf = ptn.substr(pos + 1);

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        if (pre.size() + suf.size() > str.size()) {
            cout << "NE" << endl;
        } else {
            if (pre == str.substr(0, pre.size()) && suf == str.substr(str.size() - suf.size())) {
                cout << "DA" << endl;
            } else {
                cout << "NE" << endl;
            }
        }
    }
}