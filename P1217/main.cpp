#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool is_prime(const int n) {
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int a,b;
    cin >> a >> b;
    for(int i = a; i <= b; i++) {
        string temp = to_string(i);
        vector<char> temp_vector;
        for (int j = sizeof(temp);j > 0; j--;) {
            temp_vector.push_back(temp[j ]);
        }
        if(is_prime(i)) {
        }
    }
    return 0;
}
