#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int T;
    cin >> T;
    if (T == 1) {
        cout << "I love Luogu!";
    } else if (T == 2) {
        cout << 2 + 4 << " " << 10 - 2 - 4;
    } else if (T == 3) {
        cout << 14/4 <<endl<< 14/4*4 <<endl<< 14%4;
    } else if (T == 4) {
        cout << 166.667;
    } else if (T == 5) {
        cout << (220 + 260) / (12 + 20);
    } else if (T == 6) {
        cout << sqrt(117);
    } else if (T == 7) {
        cout << 110 << endl << 90 << endl  << 0;
    } else if (T == 8) {
        cout << 3.141593 * 2 * 5 << endl << 3.141593 * 5 * 5 << endl <<3.141593 * 5 * 5 * 5 * 4 /3 << endl; ;
    } else if (T == 9) {
        cout << 22;
    } else if (T == 10) {
        cout << 9;
    } else if (T == 11) {
        double a = 100;
        double b = 3;
        cout << a/b;
    } else if (T == 12) {
        cout << 13 << endl << "R";
    } else if (T == 13) {
        cout << 16;
    } else if (T == 14) {
        cout << 50;
    }
    return 0;
}