#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


bool compare(const vector<int> a, const vector<int> b) {
    int a_result = 0, b_result = 0;
    for (int i = 0; i < 3; i++) {
        if (abs(a[i] - b[i]) > 5) {
            return false;
        }
        a_result += a[i];
        b_result += b[i];
    }
    if (abs(a_result - b_result) > 10) {
        return false;
    }
    return true;
}


int main()
{
    int number;
    int count = 0;
    cin >> number;
    vector<vector<int>> scores;

    for (int i = 0; i < number; i++) {
        vector<int> temp_vector;
        for (int j = 0; j < 3; j++) {
            int temp = 0;
            cin >> temp;
            temp_vector.push_back(temp);
        }
        scores.push_back(temp_vector);
    }
    scores.shrink_to_fit();
    for (int i = 0; i < number; i++) {
        for(int j = i + 1; j < number; j++) {
            if(compare(scores[i], scores[j])) {
                count ++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
