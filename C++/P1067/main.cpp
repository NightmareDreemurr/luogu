#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cin >> a;
    vector <int> v(a+1);
    for (int i = 0; i <= a; i++) {
        int temp;
        cin >> temp;
        v[i] = temp;
    }
    for (int i = 0; i < v.size(); i++) {
        if (v[i] != 0) {
            if (i != 0){
                if (v[i] > 0) {
                    cout << '+';
                }
            }
            if (v[i] < 0) {
                cout << '-';
            }
            if (abs(v[i]) != 1){
                cout << abs(v[i]);
            }
            if (abs(v[i]) == 1 && i == a){
                cout << abs(v[i]);
            }
            int exp = a - i;
            if (exp != 1 && exp != 0) {
                cout << "x^" << exp;
            } else if (exp == 1) {
                cout << "x";
            }
        }
    }
    return 0;
}
