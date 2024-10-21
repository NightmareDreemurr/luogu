#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n,x;
    int result = 0;
    cin >> n >> x;
    vector<vector<string>> v;
    for (int i = 1; i <= n; i++) {
        string temp = to_string(i);
        for (unsigned char j : temp) {
            j = j - '0';
            if (j == x) {
                result ++;
            }
        }
    }
    cout << result;

    return 0;
}
