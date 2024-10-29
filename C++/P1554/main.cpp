#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    vector<string> numbers;
    vector<int> count;
    count.resize(10);
    for(int i=a; i<=b; i++) {
        string temp = to_string(i);
        numbers.push_back(temp);
    }
    for (int i = 0; i < numbers.size(); i++) {
        for(int j = 0; j < numbers[i].size(); j++) {
            int loc = numbers[i].at(j) - '0';
            count[loc]++;
        }
    }
    for (int i = 0; i < count.size(); i++) {
        cout << count[i] << " ";
    }
    return 0;
}
