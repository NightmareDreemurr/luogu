#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a = 0, b = 0, c = 0;
    scanf("%lf %lf %lf", &a, &b, &c);
    double d = a + b + c;
    double p = 0.5 * d;
    double s = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.1lf", s);
    return 0;
}
