#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> set1;
    while(cin.peek() != '\n') {
        int temp;
        cin >> temp;
        set1.push_back(temp);
    } //input
    unsigned long long result = 0;
    for (auto &a : set1) {
        result += a;
    }
    result *= pow(2,set1.size() - 1);
    cout << result << endl;
    return 0;
}
