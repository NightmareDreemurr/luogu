#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    unsigned long long int result = 0;
    unsigned long long int temp_result = 1;
    int temp_max = n;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= temp_max; j++) {
            temp_result = temp_result * j;
        }
        result += temp_result;
        temp_result = 1;
        temp_max --;
    }
    cout << result;
    return 0;
}
