#include <bits/stdc++.h>
using namespace std;

bool containfull(const string text) {
    if(text.find("boy") != string::npos || text.find("girl") != string::npos) {
        return true;
    }
    return false;
}

bool containpartial(const string text) {
    if(text.find("boy") != string::npos || text.find("girl") != string::npos) {
        return true;
    }
    if (text.find("gir.") != string::npos || text.find(".irl") != string::npos) {
        return true;
    }
    if (text.find("bo.") != string::npos || text.find(".oy") != string::npos || text.find("gi..") != string::npos || text.find(".ir.") != string::npos || text.find("..rl") != string::npos) {
        return true;
    }
    if (text.find("b..") != string::npos || text.find(".o.") != string::npos || text.find("..y") != string::npos || text.find("g...") != string::npos || text.find(".i..") != string::npos || text.find("..r.") != string::npos || text.find("...l") != string::npos) {
        return true;
    }
    return false;
}
int main() {
    string text;
    string dots = "";
    int boy_count = 0, girl_count = 0;
    getline(cin, text);
    for (int i = 0; i < text.length(); i++) {
        dots.append(".");
    }
    while (text != dots) {
        size_t temp_pos ;
        while (containfull(text)){
            if ((temp_pos = text.find("boy")) != string::npos) {
                boy_count++;
                text.replace(temp_pos, 3,"...");
            }
            if ((temp_pos = text.find("girl")) != string::npos) {
                girl_count++;
                text.replace(temp_pos, 4,"....");
            }
        }
        while (containpartial(text)){
            if ((temp_pos = text.find("bo.")) != string::npos || (temp_pos = text.find(".oy")) != string::npos || (temp_pos = text.find("b..")) != string::npos || (temp_pos = text.find(".o.")) != string::npos || (temp_pos = text.find("..y")) != string::npos) {
                boy_count++;
                text.replace(temp_pos, 3, "...");
            }
            if ((temp_pos = text.find("gir.")) != string::npos || (temp_pos = text.find(".irl")) != string::npos || (temp_pos = text.find("gi..")) != string::npos || (temp_pos = text.find(".ir.")) != string::npos || (temp_pos = text.find("..rl")) != string::npos || (temp_pos = text.find("g...")) != string::npos || (temp_pos = text.find(".i..")) != string::npos || (temp_pos = text.find("..r.")) != string::npos || (temp_pos = text.find("...l")) != string::npos) {
                girl_count++;
                text.replace(temp_pos, 4, "....");
            }
        }
    }
    cout << boy_count << endl << girl_count << endl;
    return 0;
}
