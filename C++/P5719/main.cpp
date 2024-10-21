#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    double dividables = 0;
    double not_dividables = 0;
    int dividables_count = 0;
    int not_dividables_count = 0;
    for (int i = 1; i <= n; i++) {
        if (i % k == 0) {
            dividables_count++;
            dividables += i;
        } else {
            not_dividables += i;
            not_dividables_count++;
        }
    }
    printf("%.1lf %.1lf",dividables / dividables_count, not_dividables / not_dividables_count);
    return 0;
}
