#include <bits/stdc++.h>
using namespace std;


int main() {
    int flower_count, flower_days;
    cin >> flower_count >> flower_days;
    vector<int> flowers(flower_count, 0);
    for(int i = 0; i < flower_days; i++) {
        string operation;
        cin >> operation;
        if(operation == "water") {
            int l, r;
            cin >> l >> r;
            for(int j = l - 1; j <= r - 1; j++) {
                flowers[j]++;
            }
        } else if(operation == "rise") {
            int l, r, k, count = 0;
            cin >> l >> r >> k;
            for(int j = l - 1; j <= r - 1; j++) {
                if(flowers[j] >= k) {
                    flowers[j] = 0;
                    count++;
                }
            }
            cout << count << endl;
        }
    }
    return 0;
}
