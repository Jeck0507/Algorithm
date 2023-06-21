#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        string str;
        int s = 1;
        int ans = 0;
        
        cin >> str;
        for(int j =0; j<str.length(); j++){
            
            if(str[j] == 'O'){
                ans +=s;
                if(str[j] == str[j+1]){
                    s++;
                }
                else{
                    s = 1;
                }
            }

        }
        cout << ans << endl;

    }


}