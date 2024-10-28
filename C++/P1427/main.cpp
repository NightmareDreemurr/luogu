#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int i;
    cin >> i;
    do {
        v.push_back(i);
        cin >> i;
    } while(i != 0);

    for(int i = v.size() - 1;i >= 0;i--) {
        if(i == 0) {
            cout << v[i];
        } else {
            cout << v[i] << " ";
        }
    }
    return 0;
}
