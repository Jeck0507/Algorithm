#include <iostream>

using namespace std;

long long fac(int x){
    if(x <= 1){
        return 1;
    }
    else{
        return x*fac(x-1); 
    }
}

int main(){
    int n;

    cin >> n;
    cout << fac(n);
}