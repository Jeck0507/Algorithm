#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string flag;
    vector<int> a(8);

    for(int i=0; i<8; i++){
        int temp;

        cin >> temp;
        a[i] = temp;
    }

    for(int i= 0; i <8; i++){
        if(a[i] == a[i-1]+1){
            flag = "ascending";
        }
        else if(a[i] == a[i+1]+1){
            flag = "descending";
        }
        else{
            flag = "mixed";
            break;

        }

    }

    cout << flag;
    
}