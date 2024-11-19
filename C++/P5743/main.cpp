#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int total = 1;
    for (int i = 1; i < n; i++) {
        total += 1;
        total *= 2;
    }
    cout << total;
    return 0;
}
