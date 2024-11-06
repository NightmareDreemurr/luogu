#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,max = 0;
    string text, new_text;
    cin >> n >> text;
    // int pos,count = 0;
    // while ((pos = text.find("VK",pos + 1)) != string::npos) {
    //     count++;
    // }
    // if (count > max) {
    //     max = count;
    // }
    for(int i = 0; i < n; i++) {
        new_text = text;
        if(new_text[i] == 'V') {
            new_text[i] = 'K';
        } else {
            new_text[i] = 'V';
        }
        int pos_new_text, count_new_text = 0;
        while ((pos_new_text = new_text.find("VK",pos_new_text + 1)) != string::npos) {
            count_new_text++;
        }
        if (count_new_text > max) {
            max = count_new_text;
        }
    }
    cout << max << endl;
    return 0;
}
