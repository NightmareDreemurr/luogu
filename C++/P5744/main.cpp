#include <bits/stdc++.h>
using namespace std;
struct student {
    string name;
    int age;
    int score;
    void educate() {
        score = score * 6 / 5;
        age++;
        if(score > 600) {
            score = 600;
        }
    }
};
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        student new_student;
        cin >> new_student.name >> new_student.age >> new_student.score;
        new_student.educate();
        cout << new_student.name << " " << new_student.age << " " << new_student.score << endl;
    }
    return 0;
}
