#include <iostream>
using namespace std;

int main()
{
    int num;
    cin>> num;
    for(int x = 100;x >= 1;x--){
        for(int k = 1; k <= x * 2; k++){
            if (1092 * k + 364 * x == num) {
                cout << x << endl << k;
                return 0;
            }
        }
    }
}
