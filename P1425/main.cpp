#include <iostream>
using namespace std;
int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int before = a * 60 + b;
    int after = c * 60 + d;
    int diff = after - before;
    int hr = diff / 60;
    int min = diff % 60;
    cout << hr << " " << min << endl;
    return 0;
}
