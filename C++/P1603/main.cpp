#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string,int> numbers = {{"one",1},
                               {"two",2},
                               {"three",3},
                               {"four",4},
                               {"five",5},
                               {"six",6},
                               {"seven",7},
                               {"eight",8},
                               {"nine",9},
                               {"ten",10},
                               {"eleven",11},
                               {"twelve",12},
                               {"thirteen",13},
                               {"fourteen",14},
                               {"fifteen",15},
                               {"sixteen",16},
                               {"seventeen",17},
                               {"eighteen",18},
                               {"nineteen",19},
                               {"twenty",20},
                               {"a",1},
                               {"both",2},
                               {"another",1},
                               {"third",3},
                               {"second",2},
                               {"first",1}};
    vector<int> passwords;
    for(int i = 0; i < 6; i++) {
        string number;
        cin >> number;
        if (numbers.contains(number)) {
            passwords.push_back(numbers[number]);
        }
    }
    if(passwords.empty()) {
        cout << 0 << endl;
        return 0;
    }

    for (auto &password : passwords) {
        password = password * password;
        password %= 100;
    }

    sort(passwords.begin(), passwords.end());
    stringstream ss;
    string answer;
    for (auto password : passwords) {
        if (password < 10) {
            ss << '0';
        }
        ss << password;
    }
    ss >> answer;
    while(answer[0] == '0') {
        answer.erase(0, 1);
    }
    cout << answer << endl;
    return 0;
}
