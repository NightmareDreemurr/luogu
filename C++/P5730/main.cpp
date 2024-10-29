#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main() {
    map<int,vector<string>> number_map;
    number_map[0] = {"xxx","x.x","x.x","x.x","xxx"};
    number_map[1] = {"..x","..x","..x","..x","..x"};
    number_map[2] = {"xxx","..x","xxx","x..","xxx"};
    number_map[3] = {"xxx","..x","xxx","..x","xxx"};
    number_map[4] = {"x.x","x.x","xxx","..x","..x"};
    number_map[5] = {"xxx","x..","xxx","..x","xxx"};
    number_map[6] = {"xxx","x..","xxx","x.x","xxx"};
    number_map[7] = {"xxx","..x","..x","..x","..x"};
    number_map[8] = {"xxx","x.x","xxx","x.x","xxx"};
    number_map[9] = {"xxx","x.x","xxx","..x","xxx"};



    int n = 0;
    cin >> n;
    vector<int> numbers;

    for(int i = 0; i < n; i++) {
        int temp = 0;
        temp = getchar() - '0';
        numbers.push_back(temp);
    }
    numbers.shrink_to_fit();

    for(int line = 0; line < 5; line ++) {
        for(int i = 0; i < n; i++) {
            int temp = numbers[i];
            cout << number_map[temp][line];
            if(i != n - 1) {
                cout << ".";
            }
        }
        cout << endl;
    }



    return 0;
}
