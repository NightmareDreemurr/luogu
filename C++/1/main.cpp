#include <bits/stdc++.h>
using namespace std;

int main()
{
    int length;
    cin >> length;
    for(int i = length; i >= 1; i--) {
        for(int j = 0; j < i; j++) {
            cout << "#";
        }
        cout << endl;
    }
    return 0;
}
