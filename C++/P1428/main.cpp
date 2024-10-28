#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    vector<int> v,result;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j <= i - 1; j++) {
            if(v[j] < v[i]) {
                count++;
            }
        }
        result.push_back(count);
    }
    for(int i : result) {
        cout << i << " ";
    }
    return 0;
}
