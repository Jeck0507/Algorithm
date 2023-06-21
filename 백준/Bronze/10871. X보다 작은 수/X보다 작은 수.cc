#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int n,m,temp;

    cin >> n >> m;

    vector<int> a(n);

    for(int i=0; i <n; i++){
        cin >> temp;
        a[i] = temp;

        if(a[i] < m){
            cout << a[i] << " ";
        }
    }

}