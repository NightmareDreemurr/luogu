#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> set1;
    cin.ignore();
    while(cin.peek() != '\n') {
        set1.insert(cin.get() - 0);
    }
    for(auto a : set1) {
        cout << a << endl;
    }
    return 0;
}
