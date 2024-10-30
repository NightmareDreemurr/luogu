#include <bits/stdc++.h>
using namespace std;
void flip(bool &a) {
    a ^= true;
}
int main() {
    int n;
    cin >> n;
    int count = 0;
    bool stat = true;
    for(int i = 0; i < n; i++) {
        if(count == 0) {
            int temp;
            cin >> temp;
            count += temp;
            flip(stat);
        }
        for(int j = 0; j < n; j++) {
            if(count == 0) {
                int temp;
                cin >> temp;
                count += temp;
                flip(stat);
            }
            cout << stat;
            count--;
        }
        cout << endl;
    }
}
