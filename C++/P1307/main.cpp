#include <iostream>
#include <valarray>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string number = to_string(n);
    reverse(number.begin(), number.end());
    if (number == "0") {
        cout << 0 << endl;
        return 0;
    }
    for(int i = 0; i < number.size();i++) {
        if(number[i] == '-') {
            number.erase(i);
        }
    }
    for(int i = 0; i < number.size();i++) {
        if(number[i] == '0') {
            number.erase(i);
        }
    }
    if (n < 0) {
        number.insert(0, 1, '-');
    }
    cout << number << endl;
    return 0;
}
