#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main() {
    map<int,vector<string>> number_map;
    number_map[0] = {"XXX","X.X","X.X","X.X","XXX"};
    number_map[1] = {"..X","..X","..X","..X","..X"};
    number_map[2] = {"XXX","..X","XXX","X..","XXX"};
    number_map[3] = {"XXX","..X","XXX","..X","XXX"};
    number_map[4] = {"X.X","X.X","XXX","..X","..X"};
    number_map[5] = {"XXX","X..","XXX","..X","XXX"};
    number_map[6] = {"XXX","X..","XXX","X.X","XXX"};
    number_map[7] = {"XXX","..X","..X","..X","..X"};
    number_map[8] = {"XXX","X.X","XXX","X.X","XXX"};
    number_map[9] = {"XXX","X.X","XXX","..X","XXX"};


    int n;
    cin >> n;
    vector<char> numbers;

    getchar();
    getchar();

    for(int i = 0; i < n; i++) {
        char temp = getchar();
        numbers.push_back(temp);
    }
    numbers.shrink_to_fit();

     for(int line = 0; line < 5; line ++) {
        for(int i = 0; i < n; i++) {
            int temp = numbers[i] - '0';
            cout << number_map[temp][line];
            if(i != n - 1) {
                cout << ".";
            }
        }
        cout << endl;
    }




    return 0;
}
