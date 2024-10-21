#include <iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    int result = 0;
    for(int i = 1; i <= k; i++) {
        result += i;
    }
    cout << result;
    return 0;
}
