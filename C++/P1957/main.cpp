#include <bits/stdc++.h>
using namespace std;
struct question {
    char type;
    int first, second;
};

int main()
{
    int n;
    vector<question> questions;
    cin >> n;
    string next_problem;
    char temp_type;
    getchar();
    // getchar();
    for (int i = 0; i < n; i++) {

        getline(cin,next_problem);
        stringstream ss;
        ss << next_problem;
        int temp_first, temp_second;
        if (next_problem[0] >= 'a' && next_problem[0] <= 'c') {
            ss >> temp_type >> temp_first >> temp_second;
        } else {
            ss >> temp_first >> temp_second;
        }
        questions.push_back(question{temp_type,temp_first,temp_second});
    }
    for(auto& question : questions) {
        char operand;
        int result;
        unsigned int word_count = 2;
        switch(question.type) {
            case 'a':
                result = question.first + question.second;
                operand = '+';
                break;
            case 'b':
                result = question.first - question.second;
                operand = '-';
                break;
            case 'c':
                result = question.first * question.second;
                operand = '*';
        }
        string output = to_string(question.first) + operand + to_string(question.second) + '=' + to_string(result);
        cout << output << endl << output.length() << endl;
    }
    return 0;
}
