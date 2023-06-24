#include <iostream>
#include <string>

using namespace std;

int main() {
    int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }; 
    string day[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" }; 
    int count1 = 0;
    int x, y;

    cin >> x >> y;

    for (int i = 0; i < x; i++) {
        if ((i + 1) == x)
        {
            count1 += y;
        }
        else
        {
            count1 += month[i];

        }
    }



    cout << day[count1 % 7] << endl; 

    return 0;


}