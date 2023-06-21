#include <iostream>
#include <vector>
using namespace std;

int main(){
    int cnt = 0;
    vector<int> a(48);

    for(int i=0;i <10; i++){
        int temp;
        cin >> temp;
        a[temp % 42]++;	
    }

    for(int i=0; i<48; i++){
        if(a[i] > 0 ){
            cnt++;
        }
    // cout << cnt;

    }

    cout << cnt;

}