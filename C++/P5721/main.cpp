#include <iostream>
using namespace std;
int main()
{
    int a,b,number;
    cin >> a;
    b = a;
    number = 1;
    for (int i = 1; i <= a; i++) {
        if (b == 0) {
            break;
        }
        for(int j = 1; j <= b; j++) {
            if (number < 10) {
                printf("0%d", number);
            } else {
                 printf("%d", number);
             }
                number++;
        }
        cout << endl;
        b--;
    }
    return 0;
}
