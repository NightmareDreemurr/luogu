#include <iostream>
using namespace std;
int main() {
    int a,b,c,d,e,f,g,h,i,int_identifier;
    char char_identifier;
    scanf("%1d-%1d%1d%1d-%1d%1d%1d%1d%1d-%c",&a,&b,&c,&d,&e,&f,&g,&h,&i,&char_identifier);
    char real_identifier = (a*1+b*2+c*3+d*4+e*5+f*6+g*7+h*8+i*9)%11;
    if (real_identifier == 10) {
        real_identifier = 0x58;
    }else {
        real_identifier = real_identifier + '0';
    }
    if (char_identifier == real_identifier) {
        cout << "Right";
    }

    else {
        printf("%d-%d%d%d-%d%d%d%d%d-%c",a,b,c,d,e,f,g,h,i,real_identifier);
    }
    return 0;
}
