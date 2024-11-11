#include <bits/stdc++.h>
using namespace std;

void fill_space(vector<vector<char>> &matrix) {
    for(auto &a : matrix) {
        for(auto &b : a) {
            if(b == 0) {
                b = ' ';
            }
        }
    }
}

int main() {
    string article;
    for (int i = 1; i <= 4; i++) {
        string temp;
        getline(cin, temp);
        article.append(temp);
    }
    for(int i = 0; i < article.length();) {
        if(article[i] < 'A' || article[i] > 'Z') {
            article.erase(i, 1);
            continue;
        }
        i ++;
    }
    vector<int> char_count;
    char_count.resize(26);
    for(const char c : article) {
        char_count[c - 'A'] ++;
    }
    vector<vector<char>> result_temp;
    for(int i = 0; i < 26; i++) {
        if(result_temp.size() <= char_count[i]) {
            result_temp.resize(char_count[i]);
            for(int j = 0; j < char_count[i]; j++) {
                result_temp[j].resize(26);
            }
            fill_space(result_temp);
        }
        for (int j = 0; j < char_count[i]; j++) {
            result_temp[j][i] = '*';
        }
    }
    vector<vector<char>> result;
    for(int i = result_temp.size() - 1; i >= 0; i--) {
        ;result.push_back(result_temp[i]);
    }
    for(auto a : result) {
        int count = 0;
        for(auto b : a) {
            cout << b;
            if(count < 25) {
                cout << " ";
            }
            count++;
        }
        cout << endl;
    }
    cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z";
    return 0;
}
