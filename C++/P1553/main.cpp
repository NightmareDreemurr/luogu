#include <bits/stdc++.h>
using namespace std;
void reverse(string &number) {
    string new_number = "";
    for(auto &c : number) {
        new_number = c + new_number;
    }
    number = new_number;
}
void erase_zero(string &number) {
    while(number.at(0) == '0') {
        if(number.length() != 1){
            number.erase(0, 1);
        } else {
            break;
        }
    }
}
int main() {
    string num;
    getline(cin, num);
    int pos;
    if ((pos = num.find('.')) != string::npos) {
        string front = num.substr(0, pos);
        string back = num.substr(pos + 1, num.length() - pos - 1);
        reverse(front);
        erase_zero(front);
            erase_zero(back);
            reverse(back);
        cout << front << '.' << back << endl;
    } else if ((pos = num.find('/')) != string::npos) {
        string front = num.substr(0, pos);
        string back = num.substr(pos + 1, num.length() - pos - 1);
        reverse(front);
        erase_zero(front);
        reverse(back);
        erase_zero(back);
        cout << front << '/' << back << endl;
    } else if ((pos = num.find('%')) != string::npos) {
        num.erase(pos);
        reverse(num);
        erase_zero(num);
        num.append("%");
        cout << num << endl;
    } else {
        reverse(num);
        erase_zero(num);
        cout << num << endl;
    }
    return 0;
}
