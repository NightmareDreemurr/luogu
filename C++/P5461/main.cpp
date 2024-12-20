#include <bits/stdc++.h>
using namespace std;

void shemian(vector<vector<int>> &v) {
    int n = v.size();
    for(int i = 0; i < n/2; i++) {
        for(int j = 0; j < n/2; j++) {
            v[i][j] = 0;
        }
    }
    if (n > 1) {
        vector<vector<int>> temp1(n/2, vector<int>(n/2, 1));
        shemian(temp1);
        for(int i = 0; i < n/2; i++) {
            for(int j = 0; j < n/2; j++) {
                v[i + n/2][j + n/2] = temp1[i][j];
                v[i + n/2][j] = temp1[i][j];
                v[i][j + n/2] = temp1[i][j];
            }
        }
    }
}
int main() {
    int n;
    cin >> n;
    vector<vector<int>> v((int)pow(2,n), vector<int>((int)pow(2,n),1));
    shemian(v);
    for(auto i : v) {
        for(auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
