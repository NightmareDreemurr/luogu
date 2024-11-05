#include <iostream>
#include <string>

using namespace std;

int main() {
    int operate_time;
    cin >> operate_time;
    string doc;
    cin >> doc;

    for (int i = 0; i < operate_time; i++) {
        int type;
        cin >> type;

        if (type == 1) {
            string str;
            cin >> str;
            doc += str;
            cout << doc << endl;
        } else if (type == 2) {
            int a, b;
            cin >> a >> b;
            doc = doc.substr(a, b);
            cout << doc << endl;
        } else if (type == 3) {
            int a;
            string str;
            cin >> a >> str;
            doc.insert(a, str);
            cout << doc << endl;
        } else if (type == 4) {
            string str;
            cin >> str;
            size_t pos = doc.find(str);
            cout << (pos == string::npos ? -1 : (int)pos) << endl;
        }
    }
    return 0;
}