#include <iostream>
#include <vector>
#include <cmath>
#include <regex>
using namespace std;

vector<int> high_def_add(const vector<int> a, const vector<int> b) {
    vector<int> a_reverse_temp = {};
    vector<int> b_reverse_temp = {};
    vector<int> result_reverse_temp = {};
    vector<int> result = {};
    int one = 0;

    //reverse source vectors
    for(int i = a.size() - 1; i >= 0; i--) {
        a_reverse_temp.push_back(a[i]);
    }
    for(int i = b.size() - 1; i >= 0; i--) {
        b_reverse_temp.push_back(b[i]);
    }

    //add vectors per digit
    for(int i = 0; i < min(a.size(),b.size()); i++) {
        result_reverse_temp.push_back(a_reverse_temp[i] + b_reverse_temp[i]);
    }

    //supply rest digits
    if(a.size() > b.size()) {
        for(int i = b.size(); i < a.size(); i++) {
            result_reverse_temp.push_back(a_reverse_temp[i]);
        }
    } else {
        for(int i = a.size(); i < b.size(); i++) {
            result_reverse_temp.push_back(b_reverse_temp[i]);
        }
    }

    //check result
    for(int i = 0 ; i < result_reverse_temp.size(); i++) {
        if (i = result_reverse_temp.size() - 1) {
            if (result_reverse_temp[i] > 10) {
                result_reverse_temp[i] = result_reverse_temp[i] % 10;
                result_reverse_temp.assign(i+1,result_reverse_temp[i] / 10);
                break;
            }
        }
        if (result_reverse_temp[i] > 10) {
            result_reverse_temp[i] = result_reverse_temp[i] % 10;
            result_reverse_temp.assign(i+1,result_reverse_temp[i + 1] + result_reverse_temp[i] / 10);
        };
    }


    //reverse result
    for(int i : result_reverse_temp) {
        result.insert(result.begin(), i);
    }

    //return result
    return result;
};

vector<int> high_def_multiply(const vector<int> a, const vector<int> b) {
    vector<int> a_reverse_temp = {};
    vector<int> b_reverse_temp = {};
    vector<int> result_reverse_temp = {};
    vector<int> result = {};
    int temp = 0;

    for(int i = a.size() - 1; i >= 0; i--) {
        a_reverse_temp.push_back(a[i]);
    }                                                   //反转数组a
    for(int i = b.size() - 1; i >= 0; i--) {
        b_reverse_temp.push_back(a[i]);
    }                                                   //反转数组b
    for(int i = 0; i < min(a.size(), b.size()); i++) {
        result_reverse_temp.push_back(a_reverse_temp[i] * b_reverse_temp[i]);
    }                                                   //将a和b的每一位相乘

    //check result
    for(int i = 0 ; i < result_reverse_temp.size(); i++) {
        if (i = result_reverse_temp.size() - 1) {
            if (result_reverse_temp[i] > 10) {
                result_reverse_temp[i] = result_reverse_temp[i] % 10;
                result_reverse_temp.assign(i+1,result_reverse_temp[i] / 10);
                break;
            }
        }
        if (result_reverse_temp[i] > 10) {
            result_reverse_temp[i] = result_reverse_temp[i] % 10;
            result_reverse_temp.assign(i+1,result_reverse_temp[i + 1] + result_reverse_temp[i] / 10);
        };
    }

    //supply rest digits
    if(a.size() < b.size()) {
        for(int i = a.size(); i < b.size(); i++) {
            result_reverse_temp.push_back(b_reverse_temp[i]);
        }
    } else {
        for(int i = b.size(); i < a.size(); i++) {
            result_reverse_temp.push_back(a_reverse_temp[i]);
        }
    }

    //reverse result
    for(int i : result_reverse_temp) {
        result.insert(result.begin(), i);
    }
    return result;
}

int main(){
    vector<int> a = {1,2,3,4,5};
    vector<int> b = {1,2,4,4,4};

    vector<int> result = high_def_add(a,b);
    vector<int> multiply = high_def_multiply(a,b);

    for(int i : result) {
        printf("%d",i);
    }
    cout << endl;
    for(int i : multiply) {
        printf("%d",i);
    }

    return 0;
}
