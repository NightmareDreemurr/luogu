#include <iostream>
#include <cmath>
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
    int pocket;
    cin >> pocket;
    int payload = 0;
    int count = 0;
    for (int i = 2; i < pocket; i++) {
        if(is_prime(i)) {
            payload += i;
            if(payload > pocket) {
                break;
            }
            cout << i << endl;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
