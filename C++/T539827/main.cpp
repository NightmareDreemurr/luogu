#include <bits/stdc++.h>
using namespace std;

string temp_battlefield(string temp_input) {
    string temp_output(temp_input.size(),'#');
    int team_a = count(temp_input.begin(), temp_input.end(), 'A');
    int team_b = count(temp_input.begin(), temp_input.end(), 'B');
    if(temp_input.find('H') != string::npos) {
        temp_output[temp_input.find('H')] = 'H';
        for(int k = 0; k < team_a; k++) {
            temp_output[k] = 'A';
        }
        for(int k = 0; k < team_b; k++) {
            temp_output[temp_output.length() - 1 - k] = 'B';
        }
    } else if(team_a > team_b) {
            for(int k = 0; k < team_a; k++) {
                temp_output[temp_output.length() - 1 - k] = 'A';
            }
    } else if(team_b > team_a) {
        for(int k = 0; k < (team_b); k++) {
            temp_output[k] = 'B';
        }
    }
    return temp_output;
}

int main() {
    int hang, lie;
    cin >> hang >> lie;
    cin.ignore();
    vector<string> battlefield;
    for (int i = 0; i < hang; i++) {
        string temp_input;
        cin >> temp_input;
        battlefield.push_back(temp_battlefield(temp_input));
    }
    vector<string> battlefield_temp = battlefield;
    for (int i = 0; i < hang; ++i) {
        for (int j = 0; j < lie; ++j) {
            if (i > 0 && battlefield[i][j] == battlefield_temp[i - 1][j]) battlefield[i][j] = '#';
            if (i < hang - 1 && battlefield[i][j] == battlefield_temp[i + 1][j]) battlefield[i][j] = '#';
        }
    }
    for(auto & a : battlefield) {
        cout << a << endl;
    }
    return 0;
}
