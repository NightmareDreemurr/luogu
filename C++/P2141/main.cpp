#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main() {
    int n;
    vector<int> questions;
    set<int> result;

    int answer = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        questions.push_back(temp);
        result.insert(temp);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (int temp = questions[i] + questions[j]; result.contains(temp)) {
                result.erase(temp);
                answer++;
            }
        }
    }

    cout << answer << endl;

    return 0;
}
