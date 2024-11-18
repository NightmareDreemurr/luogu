#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string,vector<int>> students;
    vector<string> studentsName;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string name;
        int y, s, w;
        cin >> name >> y >> s >> w;
        studentsName.push_back(name);
        students[name].push_back(y);
        students[name].push_back(s);
        students[name].push_back(w);
        students[name].push_back(y+s+w);
    }
    for (int i = 0; i < studentsName.size(); i++) {
        for(int j = i + 1; j < studentsName.size(); j++) {
            if(abs(students[studentsName[i]][0] - students[studentsName[j]][0]) <= 5 && abs(students[studentsName[i]][1] - students[studentsName[j]][1]) <= 5 && abs(students[studentsName[i]][2] - students[studentsName[j]][2]) <= 5) {
                if(abs(students[studentsName[i]][3] - students[studentsName[j]][3]) <= 10) {
                    cout << studentsName[i] << " " << studentsName[j] << endl;
                }
            }
        }
    }
    return 0;
}
