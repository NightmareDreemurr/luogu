#include <bits/stdc++.h>
using namespace std;
void flip(bool &a) {
    a ^= true;
}
int main() {
    int n;
    int count = 0;
    int overall_count = 0;
    vector<int> v;
    int temp_n = 0;
    bool stat = false;

    while(true) {                               //first line
        int temp = getchar() - '0';
        if(temp == stat) {
            count ++;
        } else {
            if(temp == ('\r' - '0') || temp == ('\n' - '0')) {
                n = temp_n;
                v.insert(v.begin(), temp_n);
                break;
            }
            overall_count += count;
            v.push_back(count);
            flip(stat);
            count = 1;
        }
        temp_n++;
    }
    while(true) {                               //next lines
        if(overall_count == n * n) {
            break;
        }
        int temp= getchar() - '0';
        if(temp == stat) {
            count ++;
        } else {
            if(temp == ('\r' - '0') || temp == ('\n' - '0')) {
                continue;
            }
            overall_count += count;
            v.push_back(count);
            flip(stat);
            count = 1;
        }
    }
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}
