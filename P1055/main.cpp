#include <iostream>
using namespace std;
int main() {
    int a,b,c,d,e,f,g,h,i,identifier;
    char j;
    scanf("%1d-%1d%1d%1d-%1d%1d%1d%1d%1d-j",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
    identifier = (a*1+b*2+c*3+d*4+e*5+f*6+g*7+h*8+i*9)%11;
    if (identifier == j) {
        cout << "Right";
    }

    else {
        printf(,a,b,c,d,e,f,g,h,i,identifier)
    }
    return 0;
}
