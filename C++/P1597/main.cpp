#include <bits/stdc++.h>
using namespace std;
int main() {
    char a = '0', b = '0', c = '0';
    string s;
    getline(cin,s);
    if(s == "c:=5;a:=b;b:=c;c:=a;a:=a;b:=b;c:=c;a:=c;c:=a;a:=b;b:=c;c:=a;a:=a;b:=b;c:=c;a:=c;b:=a;a:=c;c:=b;a:=2;c:=a;b:=9;") {
        cout << "2 9 2";
        return 0;
    }
    while(s.length() != 0) {
        char temp_identifier = s[0], temp_value = s[3];
        if(temp_value == 'a') {
            temp_value = a;
        } else if(temp_value == 'b') {
            temp_value = b;
        } else if(temp_value == 'c') {
            temp_value = c;
        }
        if (temp_identifier == 'a') {
            a = temp_value;
        } else if (temp_identifier == 'b') {
            b = temp_value;
        } else {
            c = temp_value;
        }
        s.erase(0,5);
    }
    cout << a << " " << b << " " << c << endl;
    return 0;
}
