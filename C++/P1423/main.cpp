#include <iostream>
using namespace std;
int main()
{
    double target;
    double step_length = 2;
    int step = 0;
    double s = 0;
    cin >> target;
    while(s < target) {
        step ++;
        s += step_length;
        step_length *= 0.98;
    }
    cout << step;
    return 0;
}
