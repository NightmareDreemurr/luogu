#include <bits/stdc++.h>
using namespace std;

struct little_man {
    int isOutside;
    string job;
};

struct puzzle_action {
    int isRight, step;
};

void get_job(vector<little_man> &little_mans,vector<puzzle_action> &puzzle) {
    int index = 0, isright;
    for(int i = 0; i < puzzle.size(); i++) {
        if(puzzle[i].step == 0) {
            continue;
        }
        isright = little_mans[index].isOutside + puzzle[i].isRight;
        if (isright == 1) {
            isright = 1;
        } else if (isright == 0 || isright == 2) {
            isright = -1;
        }
        puzzle[i].step *= isright;
        if (puzzle[i].step < 0) {
            puzzle[i].step = abs(puzzle[i].step);
            puzzle[i].step %= 7;
            index = index - puzzle[i].step - 1;
            if (index < 0) {
                index = abs(index);
                index %= 7;
                index = 7 - 1 - index;
            }
        } else {
            index += puzzle[i].step;
            if (index > 6) {
                index %= 7;
            }
        }
        int a;
    }
    cout << little_mans[index].job << endl;
}

int main() {
    int little_man_count, puzzle_length;
    cin >> little_man_count >> puzzle_length;

    vector<little_man> little_mans;
    for (int i = 0; i < little_man_count; i++) {
        int temp_toward;
        string temp_job;
        cin >> temp_toward >> temp_job;
        little_mans.push_back(little_man(temp_toward, temp_job));
    }

    vector<puzzle_action> puzzle;
    for (int i = 0; i < puzzle_length; i++) {
        int temp_toward, temp_step;
        cin >> temp_toward >> temp_step;
        puzzle.push_back(puzzle_action(temp_toward, temp_step));
    }

    get_job(little_mans,puzzle);

    return 0;
}
