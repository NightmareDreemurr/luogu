#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int n2 = n * n;
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = 0;
        }
    }
    int count = 0;
    int direction = 1;
    int hang = 0, lie = -1;
    while(count < n2){
        switch(direction % 4) {
            case 1:
                if((lie+1 < n) && arr[hang][lie+1] == 0) {
                    lie++;
                    count++;
                } else {
                    direction++;
                }
                break;
            case 2:
                if((hang+1 < n) && arr[hang+1][lie] == 0) {
                    hang++;
                    count++;
                } else {
                    direction++;
                }
                break;
            case 3:
                if((lie-1 >= 0) && arr[hang][lie-1] == 0) {
                    lie--;
                    count++;
                } else {
                    direction++;
                }
                break;
            case 0:
                if((hang-1 < n) && arr[hang-1][lie] == 0) {
                    hang--;
                    count++;
                } else {
                    direction++;
                }
                break;
        }
        arr[hang][lie] = count;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d", arr[i][j]);
        }
        cout << endl;
    }
    return 0;
}
