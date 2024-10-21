#include <iostream>
using namespace std;
int main() {
    int pencils_needed;
    int pencils_status[3][2];
    cin >> pencils_needed;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> pencils_status[i][j];
        }
    }
    int price = 1145141919;
    for (int i = 0; i < 3; i++) {
        int packets = pencils_needed / pencils_status[i][0];
        if(packets * pencils_status[i][0] < pencils_needed) {
            packets++;
        }
        int temp = packets * pencils_status[i][1];
        if(temp < price) {
            price = temp;
        }
    }
    cout << price;
    return 0;
}
