#include <bits/stdc++.h>
using namespace std;
int jiecheng(int n) {
    if(n != 1) {
        return n * jiecheng(n - 1);
    }
        return 1;
}
int main() {
    int n;
    cin >> n;
    cout << jiecheng(n);
    return 0;
}