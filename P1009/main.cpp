#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> high_def_add(vector<int> a, vector<int> b) {
    vector<int> a_reverse_temp = {};
    vector<int> b_reverse_temp = {};
    vector<int> result_reverse_temp = {};
    vector<int> result = {};

    for(int i = a.size() - 1; i >= 0; i--) {
        a_reverse_temp.push_back(i);
    }
    for(int i = b.size() - 1; i >= 0; i--) {
        b_reverse_temp.push_back(i);
    }
    if(a_reverse_temp.size() < b_reverse_temp.size()) {
        for(int i = 0; i < a.size(); i++) {
            result_reverse_temp.push_back(a_reverse_temp[i] + b_reverse_temp[i]);
        }
        for(int i = a.size(); i < b.size(); i++) {
            result_reverse_temp.push_back(b_reverse_temp[i]);
        }
    } else {
        for(int i = 0; i < b.size(); i++) {
            result_reverse_temp.push_back(b_reverse_temp[i] + a_reverse_temp[i]);
        }
        for(int i = b.size(); i < a.size(); i++) {
            result_reverse_temp.push_back(a_reverse_temp[i]);
        }
    }
    for(int i : result_reverse_temp) {
        result.push_back(i);
    }
    return result;
};

int main()
{
    vector<int> a = {1,2,3,4,5};
    vector<int> b = {1,2,3};


    vector<int> result = high_def_add(a, b);
    for(int i : result) {
        printf("%d ",i);
    }

//    int n;
//    cin >> n;
//    vector<int> number = {};

    return 0;
}
