#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> high_def_add(const vector<int> a, const vector<int> b) {
    vector<int> a_reverse_temp = {};
    vector<int> b_reverse_temp = {};
    vector<int> result_reverse_temp = {};
    vector<int> result = {};

    for(int i = a.size() - 1; i >= 0; i--) {
        a_reverse_temp.push_back(a[i]);
    }                                                   //反转数组a
    for(int i = b.size() - 1; i >= 0; i--) {
        b_reverse_temp.push_back(b[i]);
    }                                                   //反转数组b
        for(int i = 0; i < min(a.size(), b.size()); i++) {
            int temp = a_reverse_temp[i] + b_reverse_temp[i];
            if (temp >= 10) {
                result_reverse_temp.push_back(temp - 10);
                b_reverse_temp[i + 1] += 1;
            } else {
                result_reverse_temp.push_back(temp);
            }
        }                                               //将a和b的每一位相加
        if(a.size() < b.size()) {
            for(int i = a.size(); i < b.size(); i++) {
                result_reverse_temp.push_back(b_reverse_temp[i]);
            }
        } else {
            for(int i = b.size(); i < a.size(); i++) {
                result_reverse_temp.push_back(b_reverse_temp[i]);
            }
        }
    for(int i : result_reverse_temp) {
        result.insert(result.begin(), i);
    }
    return result;
};

vector<int> high_def_multiply(const vector<int> a, const vector<int> b) {
    vector<int> a_reverse_temp = {};
    vector<int> b_reverse_temp = {};
    vector<int> result_reverse_temp = {};
    vector<int> result = {};

    for(int i = a.size() - 1; i >= 0; i--) {
        a_reverse_temp.push_back(a[i]);
    }                                                   //反转数组a
    for(int i = b.size() - 1; i >= 0; i--) {
        b_reverse_temp.push_back(a[i]);
    }                                                   //反转数组b
    for(int i = 0; i < min(a.size(), b.size()); i++) {
        int temp;
        temp = a_reverse_temp[i] * b_reverse_temp[i];
        if(temp >= 10) {
            result_reverse_temp.push_back(temp % 10);
            result_reverse_temp.push_back(temp / 10);
        } else {
            result_reverse_temp.push_back(temp);
        }
    }                                                   //将a和b的每一位相乘
    if(a.size() < b.size()) {
        for(int i = a.size(); i < b.size(); i++) {
            result_reverse_temp.push_back(b_reverse_temp[i]);
        }
    } else {
        for(int i = b.size(); i < a.size(); i++) {
            result_reverse_temp.push_back(b_reverse_temp[i]);
        }
    }
    return result;
}

int main()
{
    vector<int> a = {1,2,3,4,5};
    vector<int> b = {5,4,3,2,1};

    vector<int> result = high_def_add(a,b);
    vector<int> multiply = high_def_multiply(a,b);

    for(int i : result) {
        printf("%d",i);
    }

    for(int i : multiply) {
        printf("%d",i);
    }

    return 0;
}
