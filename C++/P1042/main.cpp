#include <bits/stdc++.h>
using namespace std;

void calculateScore(string s, int i1) {
    int resultw = 0;
    int resultl = 0;
    for(auto &i : s) {
        if(i == 'W') {
            resultw++;
        } else if(i == 'L') {
            resultl++;
        }
        if((resultw >= i1 || resultl >= i1 )&& abs(resultw - resultl) >= 2) {
            cout << resultw << ':' << resultl << endl;
            resultw = 0, resultl = 0;
        }
    }
    cout << resultw << ':' << resultl;
}

int main() {
    string result;
    char temp;
    temp = getchar();
    while (temp != 'E') {
        if(temp == 'W' || temp == 'L' ) {
            result += temp;
        }
        temp = getchar();
    }
    calculateScore(result, 11);
    cout << endl << endl;
    calculateScore(result, 21);

    return 0;
}
