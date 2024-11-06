#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string text;
    cin >> n >> text;
    int pos = 0, vk_count = 0;
    while ((pos = text.find("VK",pos)) != string::npos) {
        vk_count++;
        text.replace(pos, 2, "1");
    }
    if (text.find("VV") != string::npos || text.find("KK") != string::npos) {
        vk_count++;
    }
    cout << vk_count << endl;
    return 0;
}
