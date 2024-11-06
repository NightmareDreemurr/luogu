#include <bits/stdc++.h>
using namespace std;

int main() {
    string text;
    int boy_count = 0, girl_count = 0;
    getline(cin, text);
    while (text.find("boy") != string::npos || text.find("girl") != string::npos) {
        size_t temp_boy_pos = text.find("boy");
        size_t temp_girl_pos = text.find("girl");
        size_t temp_pos = string::npos;
        if (temp_boy_pos != string::npos) {
            boy_count++;
            text.replace(temp_boy_pos, 3,"...");
        }
        if (temp_girl_pos != string::npos) {
            girl_count++;
            text.replace(temp_girl_pos, 4,"....");
        }
        if ((temp_pos = text.find("..y")) != string::npos) {
            text.replace(temp_pos, 3, "boy");
        }
        if ((temp_pos = text.find(".o.")) != string::npos) {
            text.replace(temp_pos, 3, "boy");
        }
        if ((temp_pos = text.find("b..")) != string::npos) {
            text.replace(temp_pos, 3, "boy");
        }
        if ((temp_pos = text.find("...l")) != string::npos) {
            text.replace(temp_pos, 4, "girl");
        }
        if ((temp_pos = text.find("..r.")) != string::npos) {
            text.replace(temp_pos, 4, "girl");
        }
        if ((temp_pos = text.find(".i..")) != string::npos) {
            text.replace(temp_pos, 4, "girl");
        }
        if ((temp_pos = text.find("g...")) != string::npos) {
            text.replace(temp_pos, 4, "girl");
        }
    }
    cout << boy_count << endl << girl_count << endl;
    return 0;
}
