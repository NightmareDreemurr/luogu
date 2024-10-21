#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int day = 1;
    while(true) {
        if(a == 1){
            cout << day << endl;
            break;
        }
        a = floor(a / 2);
        day++;
    }
    return 0;
}
