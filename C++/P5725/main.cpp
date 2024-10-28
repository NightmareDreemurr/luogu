#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int output = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if(output < 10 ) {
                cout << 0;
            }
            cout << output;
            output ++;
        }
        cout << endl;
    }
    cout << endl;
    output = 1;
    int space = n - 1;

    for (int i = 1; i <= n; i++) {
        for(int k = 1; k <= space; k++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            if(output < 10) {
                cout << 0;
            }
            cout << output;
            output ++;
        }
        cout << endl;
        space --;
    }
    return 0;
}
