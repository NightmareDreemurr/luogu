#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> fenghuang;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        fenghuang.push_back(x);
    }
    vector<int> fenghuang_mark;
    fenghuang_mark.resize(fenghuang.size());
    for(auto &i : fenghuang_mark) {
        i = 0;
    }
    for(int i = 0; i < fenghuang.size(); i++) {
        int temp_mark = 1;
        for(int j = i + 1; j < fenghuang.size(); j++) {
            if(fenghuang[i] <= fenghuang[j]) {
                temp_mark = 0;
            }
        }
        if(temp_mark == 1) {
            fenghuang_mark[i] = 1;
        }
    }
    int count = 0;
    for(int i = 0; i < fenghuang_mark.size(); i++) {
        count += fenghuang_mark[i];
    }
    cout << count << endl;
    return 0;
}
