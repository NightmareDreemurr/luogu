#include <iostream>
using namespace std;
int main () {
    int power_usage;
    cin >> power_usage;
    double electric_fee;
    if (power_usage <= 150) {
        electric_fee = power_usage * 0.4463;
    }
    else if (power_usage <= 400) {
        electric_fee = 66.945 + (power_usage - 150) * 0.4663;
    }
    else {
        electric_fee = 183.52 + (power_usage - 400) * 0.5663;
    }
    printf("%.1lf",electric_fee);
    return 0;
}
