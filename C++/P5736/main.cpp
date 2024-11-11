#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n == 1){
        return true;
    };
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int temp;
        cin >> temp;
        if (isPrime(temp)) {
            cout << temp << " ";
        }
    }
    return 0;
}
