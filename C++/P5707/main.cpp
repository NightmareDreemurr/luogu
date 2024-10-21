#include <iostream>
using namespace std;
int main() {
    int s, v;
    int t = 10;
    cin >> s >> v;
    t += s / v + (s % v ? 1 : 0);//计算时间并考虑进位
    int hr = t / 60;
    int min = t % 60;
    if (min > 0) {
        min = 60 - min;
    }
    if (hr <= 8) {
        hr = 7 - hr;
    }else if (hr >= 8) {
        hr = 23 + (8 - hr);
    }
    if (hr < 10) {
        if (min < 10) {
            cout << "0" << hr << ":" << "0" << min << endl;
        }else {
            cout << "0" << hr << ":" << min << endl;
        }
    }else {
        if (min < 10) {
            cout << hr << ":" << "0" << min << endl;
        }else {
            cout << hr << ":" << min << endl;
        }
    }
    return 0;
}
