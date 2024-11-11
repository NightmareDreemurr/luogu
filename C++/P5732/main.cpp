#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int> > yhsj;
    yhsj.resize(n);
    yhsj[0].push_back(1);
    yhsj[1].push_back(1);
    yhsj[1].push_back(1);

    for (int i = 1; i < n; i++) {
        int first_number_index = 0;
        if(i != n-1){
            yhsj[i+1].push_back(1);
        }
        while((first_number_index + 1 < yhsj[i].size()) && i != n-1) {
            yhsj[i+1].push_back(yhsj[i][first_number_index] + yhsj[i][first_number_index+1]);
            first_number_index ++;
        }
        if(i != n-1){
            yhsj[i+1].push_back(1);
        }
    }
    for (auto & i : yhsj) {
        for (int j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
