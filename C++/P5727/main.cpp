#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v, result;
    while(n != 1) {
        v.push_back(n);
        if(n % 2 == 0) {
            n /= 2;
        } else {
            n *= 3;
            n += 1;
        }
    }
    v.push_back(1);
    for(int i : v) {
        result.insert(result.begin(), i);
    }
    for(int i : result) {
        cout << i << " ";
    }
    return 0;
}
