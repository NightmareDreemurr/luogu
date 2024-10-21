#include <iostream>
using namespace std;

int main()
{
    int days_remaining;
    cin >> days_remaining;
    int coins = 1;
    int total_coins = 0;
    while(true) {

        for(int i = 1; i <= coins; i++) {
            if (days_remaining == 0) {
                break;
            }
            total_coins += coins;
            days_remaining--;
        }
        if (days_remaining == 0) {
            break;
        }
        coins ++;
    }
     cout << total_coins << endl;
    return 0;
}
