#include <bits/stdc++.h>
using namespace std;
bool checksanjiaohanshu(int num) {
    int a = num / 100000;
    int b = (num / 10000 - 10 * a);
    int c = (num / 1000 - 10 * b - 100 * a);
    int d = (num / 100 - 10 * c- 100 * b - 1000 * a);
    int e = (num / 10 - 10 * d - 100 * c- 1000 * b - 10000 * a);
    int f = (num % 10);
    vector<int> num_list = {a, b, c, d, e, f};
    sort(num_list.begin(), num_list.end());
    if (!a && !b && !c && !d && !e && !f) {
        return false;
    }
    if(num_list[0] + num_list[1] > num_list[2] && num_list[3] + num_list[4] > num_list[5]
    || num_list[0] + num_list[1] > num_list[3] && num_list[2] + num_list[4] > num_list[5]
    || num_list[0] + num_list[1] > num_list[4] && num_list[2] + num_list[3] > num_list[5]
    || num_list[0] + num_list[1] > num_list[5] && num_list[2] + num_list[3] > num_list[4]
    || num_list[0] + num_list[2] > num_list[3] && num_list[1] + num_list[4] > num_list[5]
    || num_list[0] + num_list[2] > num_list[4] && num_list[1] + num_list[3] > num_list[5]
    || num_list[0] + num_list[2] > num_list[5] && num_list[1] + num_list[3] > num_list[4]
    || num_list[0] + num_list[3] > num_list[4] && num_list[1] + num_list[2] > num_list[5]
    || num_list[0] + num_list[3] > num_list[5] && num_list[1] + num_list[2] > num_list[4]
    || num_list[0] + num_list[4] > num_list[5] && num_list[1] + num_list[2] > num_list[3]
    ) {
        return true;
    }
    return false;
}
int main() {
    int a, b, count = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        count += checksanjiaohanshu(i);
    }
    cout << count << endl;
    return 0;
}
