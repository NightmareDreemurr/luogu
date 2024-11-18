#include <bits/stdc++.h>
using namespace std;

int main() {
    int type, a, b, c, d;
    cin >> type >> a >> b >> c >> d;
    if(type ==0) {
        cout << a + b;
    } else {
        cout << max(a - c, 0) + max(b - d, 0);
    }
    return 0;
}
