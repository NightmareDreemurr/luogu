#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length();) {
        if(s[i] == ' ' || s[i] == '\n' || s[i] == '\r') {
            s.erase(i, 1);
            continue;
        }
        i++;
    }
    cout << s.length() << endl;
    return 0;
}
