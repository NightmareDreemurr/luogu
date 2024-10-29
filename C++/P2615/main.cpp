#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> huanfang;
    huanfang.resize(n);
    for(int i = 0; i < n; i++) {
        huanfang[i].resize(n);
    }

    int hang = 0;
    int lie = n / 2;
    const int n2 = n * n;
    for(int i = 1; i <= n2; i++) {
        huanfang[hang][lie] = i;
        if(hang == 0 && lie != (n-1)) {
            lie++;
            hang = n - 1;
            continue;
        }
        if(hang != 0 && lie == (n-1)) {
            lie = 0;
            hang--;
            continue;
        }
        if(hang == 0 && lie == (n-1)) {
            hang++;
            continue;
        }
        if(hang != 0 && lie != (n-1)) {
            if(huanfang[hang-1][lie+1] == 0) {
                hang--;
                lie++;
            } else {
                hang++;
            }
        }
    }


    for(vector<int> temp: huanfang) {
        for(int temp1 : temp) {
            cout << temp1 << " ";
        }
        cout << endl;
    }


    return 0;
}