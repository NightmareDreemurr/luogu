#include <iostream>
#include <cmath>
#include <numeric>
using namespace std;

int Compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int a[3];
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    qsort(a,sizeof(a)/sizeof(int),sizeof(int),Compare);
    int gongyinshu = gcd(a[0],a[2]);
    cout << a[0] / gongyinshu << "/" << a[2] / gongyinshu << endl;
    return 0;
}