#include <bits/stdc++.h>
using namespace std;

struct point {
    float x, y;
};

double distance(point p1, point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    point a, b, c;
    cin >> a.x >> a.y;
    cin >> b.x >> b.y;
    cin >> c.x >> c.y;
    double result = distance(a, b) + distance(b,c) + distance(c,a);
    printf("%.2lf", result);
    return 0;
}
