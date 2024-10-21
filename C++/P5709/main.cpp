#include <iostream>
using namespace std;

int main() {
    double apples, time_needed, time_passed;
    cin >> apples >> time_needed >> time_passed;
    if (time_needed == 0) {
        cout << 0 << endl;
        return 0;
    }
    double apple_eaten = time_passed / time_needed;
    int apples_remaining = apples - apple_eaten;
    if (apples_remaining < 0) {
        cout << 0 << endl;
        return 0;
    }
    cout << apples_remaining << endl;
    return 0;
}
