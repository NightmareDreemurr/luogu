#include <bits/stdc++.h>
using namespace std;
string high
string high_def_add(string numa, string numb) {
    vector<int> new_num_vector;
    reverse(numa.begin(), numa.end());
    reverse(numb.begin(), numb.end());
    size_t max_len = max(numa.length(), numb.length());
    for (size_t i = 0; i < max_len; ++i) {
        int digit1 = (i < numa.length()) ? numa[i] - '0' : 0;
        int digit2 = (i < numb.length()) ? numb[i] - '0' : 0;
        new_num_vector.push_back(digit1 + digit2);
    }
    for (size_t i = 0; i < new_num_vector.size(); ++i) {
        if (new_num_vector[i] >= 10) {
            if (i < new_num_vector.size() - 1) {
                new_num_vector[i + 1] += 1;
            } else {
                new_num_vector.push_back(1);
            }
            new_num_vector[i] -= 10;
        }
    }

    string new_num;
    for(auto a : new_num_vector) {
        new_num += to_string(a);
    }
    reverse(new_num.begin(), new_num.end());
    return new_num;
}
int main() {
    string numa, numb;
    cin >> numa >> numb;
    cout << high_def_add(numa, numb) << endl;
    return 0;
}
