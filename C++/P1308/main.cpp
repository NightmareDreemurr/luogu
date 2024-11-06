#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, article;
    getline(cin, str);
    getline(cin, article);
    locale loc;
    for (char &c : str)
        c = tolower(c, loc);
    for (char &c : article)
        c = tolower(c, loc);
    article = ' ' + article + ' ';
    string strict_word = ' ' + str + ' ';
    size_t pos1 = article.find(strict_word);
    int count = 0;
    if (pos1 != string::npos) {
        string temp_word;
        stringstream ss;
        ss << article;
        while (ss >> temp_word) {
            if (temp_word == str) {
                count ++;
            }
        }
    }
    if (pos1 != string::npos) {
        cout << count << ' ' << pos1;
    } else {
        cout << -1;
    }
    return 0;
}
