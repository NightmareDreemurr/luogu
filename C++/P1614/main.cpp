#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    vector<long long> num_list;
    long long answer = 2147483647;
    cin >> a >> b;
    for (long long i = 0; i < a; i++) {
        long long temp;
        cin >> temp;
        num_list.push_back(temp);
    }
    for (long long i = 0; i < a - b; i++) {
        long long temp = 0;
        for (long long j = i; j < i + b; j++) {
            temp += num_list[j];
        }
        answer = min(answer, temp);
    }

    cout << answer;

    return 0;
}
