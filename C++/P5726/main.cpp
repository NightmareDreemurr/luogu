#include <algorithm>
#include <iostream>
#include <vector>
#include <bits/ranges_algo.h>
using namespace std;
int main()
{
    int n;
    vector<int> array;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp = 0;
        cin >> temp;
        array.push_back(temp);
    }
    sort(array.begin(), array.end());
    array.shrink_to_fit();
    array[0] = 0;
    array[array.size() - 1] = 0;

    double result = 0;
    for (int i : array) {
        result += i;
    }
    if (array.size() == 1) {
        cout << 0;
        return 0;
    } else {
        n -= 2;
    }
    result /= n;
    printf("%.2lf\n", result);
    return 0;
}
