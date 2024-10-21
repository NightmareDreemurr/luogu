#include <iostream>
using namespace std;

int main() {
    int x, n;
    cin >> x >> n;
    int overall = 250 * n;
    int week = x;
    for (int i = 0; i < n; i++) {
        if (week == 6 || week == 7) {
            overall = overall - 250;
        }
        if (week == 7) {
            week = 1;
            continue;
        }
        week++;
    }
    cout << overall << endl;

    return 0;
}
