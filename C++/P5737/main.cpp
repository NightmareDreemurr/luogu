#include <bits/stdc++.h>
using namespace std;
bool is_leap(int year) {
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        return true;
    }
    return false;
}
int main() {
    int a,b;
    vector<int> v;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (is_leap(i)) {
            v.push_back(i);
        }
    }
    cout << v.size() << endl;
    for (auto a : v) {
        cout << a << " ";
    }
    return 0;
}
