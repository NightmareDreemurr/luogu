#include <iostream>
using namespace std;
int main() {
    int status = 0;
    int a = 0;
    int shabi[4] = {0, 0, 0, 0};
    cin >> a;
    if(a % 2 == 0) {
        status += 2;
    }
    if(a > 4 && a <= 12) {
        status += 1;
    }
    if(status == 3) {
        shabi[0] = 1;
    }
    if(status > 0) {
        shabi[1] = 1;
    }
    if(status > 0 && status < 3) {
        shabi[2] = 1;
    }
    if(status == 0) {
        shabi[3] = 1;
    }
    for(int i = 0; i < 4; i++) {
        cout << shabi[i] << " ";
    }
    return 0;
}
