#include <bits/stdc++.h>
using namespace std;

int main() {
    int wallet, n;
    cin >> wallet >> n;
    vector<int> mark(5);
    for (int i = 0; i < n; i++) {
        if (wallet == 0) {
            break;
        }
        string temp;
        getline(cin, temp);
        stringstream ss(temp);

        vector<int> v;
        int a;
        while (ss >> a) {
            v.push_back(a);
        }

        sort(v.begin(), v.end(), greater<int>());

        for(auto a: v) {
            if(a <= wallet) {
                mark[a - 1] = 1;
                wallet -= a;
                break;
            }
        }
    }
    cout << mark[0] << " " << mark[1] << " " << mark[2] << " " << mark[3] << " " << mark[4] << endl;
    cout << wallet;
    return 0;
}
