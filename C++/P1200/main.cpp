#include <bits/stdc++.h>
using namespace std;

int main() {
    string comet, group;
    int comet_value = 1, group_value = 1;
    cin >> comet >> group;
    for (auto a : comet) {
        int temp = a - 'A' + 1;
        comet_value *= temp;
    }
    for (auto a : group) {
        int temp = a - 'A' + 1;
        group_value *= temp;
    }
    if(comet_value % 47 == group_value % 47) {
        cout << "GO" << endl;
    } else {
        cout << "STAY" << endl;
    }
    return 0;
}
