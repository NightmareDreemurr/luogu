#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    v.resize(80);
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    for (int i = 1; i <= s1; i++) {
        for (int j = 1; j <= s2; j++) {
            for (int k = 1; k <= s3; k++) {
                int temp_res = i + j + k - 1;
                v[temp_res] += 1;
            }
        }
    }
    int temp = v[0];
    int result = 0;
    for(int i = 1; i <= 80; i++) {
        if(v[i - 1] > temp) {
            result = i;
            temp = v[i - 1];
        }
    }
    cout << result << endl;
    return 0;
}
