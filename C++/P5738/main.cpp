#include <bits/stdc++.h>
using namespace std;
double finalscore(vector<int> scores) {
    double final_score = 0.0;
    sort(scores.begin(), scores.end());
    scores.erase(scores.begin());
    scores.erase(scores.end());
    for (auto a : scores) {
        final_score += a;
    }
    final_score /= scores.size();
    return final_score;
}
int main() {
    int n,m;
    cin >> n >> m;
    vector<double> scoreboard;
    for (int i = 0; i < n; i++) {
        vector<int> temp;
        for (int j = 0; j < m; j++) {
            int temp_score;
            cin >> temp_score;
            temp.push_back(temp_score);
        }
        scoreboard.push_back(finalscore(temp));
    }
    sort(scoreboard.begin(), scoreboard.end());
    printf("%.2lf",scoreboard[scoreboard.size() - 1]);
    return 0;
}
