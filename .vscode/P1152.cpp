#include <iostream>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int state[n-1];
    for (int i = 0; i < n-1; i++) {
        state[i] = 1;
    }
    for (int i = 0; i < n-1; i++) {
        if(a[i] - a[i+1] == 0) {
            continue;
        }
        state[abs(a[i+1] - a[i]) - 1] = 0;
    }



    int finalstate = 0;
    for (int i = 0; i < n-1; i++) {
        finalstate += state[i];
    }
    if (finalstate > 0) {
        cout << "Not jolly";
    }
    else {
        cout << "Jolly";
    }
    return 0;
}

//
// Created by kcalb on 2024/9/30.
//
