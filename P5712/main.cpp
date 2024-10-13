#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    if (a > 1) {
        cout << "Today, I ate " << a << " apples.";
        return 0;
    }
    cout << "Today, I ate " << a << " apple.";
    return 0;
}
