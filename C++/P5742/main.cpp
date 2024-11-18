#include <bits/stdc++.h>
using namespace std;
struct student {
    int id, xueye, suzhi;
    int zonghe() {
        return xueye * 7 + suzhi * 3;
    }
    int zongfen() {
        return xueye + suzhi;
    }
};
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        student student1;
        cin >> student1.id >> student1.xueye >> student1.suzhi;
        if (student1.zongfen() > 140 && student1.zonghe() >= 800) {
            cout << "Excellent" << endl;
        } else {
            cout << "Not excellent" << endl;
        }
    }
    return 0;
}
