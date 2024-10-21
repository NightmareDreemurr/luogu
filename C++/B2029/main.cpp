#include <iostream>
using namespace std;

int main() {
    int h, r;
    cin >> h >> r;
    int bucket = 0;
    double v = 3.14 * r * r * h;
    int checker = 20000 / v;
    bucket = checker + (20000 / v != checker ? 1 : 0);
    cout << bucket;
    return 0;
}
