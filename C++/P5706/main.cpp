#include <iostream>
using namespace std;

int main() {
    double t;
    int n;
    cin >> t >> n;
    t = t / n;
    n = n * 2;
    printf("%.3lf\n%d", t, n);
    return 0;
}
