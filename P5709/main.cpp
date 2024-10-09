#include <iostream>
using namespace std;

int main() {
    int m = 0, t = 0, s = 0;
    scanf("%d %d %d",&m,&t,&s);
    if(t==0) {
        cout << 0;
        return 0;
    }
    if(s / t + (s % t > 0 ? 1: 0) > m) {
        cout << 0;
        return 0;
    }
    int remaining = m - s / t + (s % t > 0 ? 1: 0);
    cout << remaining;
    return 0;
}
