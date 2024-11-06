#include <bits/stdc++.h>
using namespace std;

int main() {
    string text;
    getline(cin, text);
    int count = 0;
    for (auto &c : text) {
        if (c == ' ' || c == 'a' || c == 'd' || c == 'g' || c == 'j' || c == 'm' || c == 'p' || c == 't' || c == 'w' ) {
            count ++;
        } else if (c == 'b' || c == 'e' || c == 'h' || c == 'k' || c == 'n' || c == 'q' || c == 'u' || c == 'x') {
            count += 2;
        } else if (c == 'c' || c == 'f' || c == 'i' || c == 'l' || c == 'o' || c == 'r' || c == 'v' || c == 'y') {
            count += 3;
        } else if (c == 's' || c == 'z') {
            count += 4;
        }
    }
    cout << count << endl;
    return 0;
}
