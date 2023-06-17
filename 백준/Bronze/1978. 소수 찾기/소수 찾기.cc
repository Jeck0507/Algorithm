#include <iostream>

using namespace std;

int main(){
    int n,a,cnt =0,ans = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a;

        for(int j = 1; j <= a; j++){
            
            if(a%j == 0){
                cnt++;
            }
        }
        if(cnt == 2){
            ans++;
        }
        
        cnt = 0;
    }
    cout << ans << endl;

}