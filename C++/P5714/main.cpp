#include <iostream>
using namespace std;
int main() {
    double weight, height;
    cin >> weight >> height;
    double bmi = weight / (height * height);
    if(bmi < 18.5) {
        cout << "Underweight";
    } else if(bmi < 24) {
        cout << "Normal";
    } else {
        cout << bmi << endl << "Overweight";
    }
    return 0;
}
