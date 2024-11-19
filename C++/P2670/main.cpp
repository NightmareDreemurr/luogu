#include <bits/stdc++.h>
using namespace std;

int main() {
    int rows,cols;
    cin >> rows >> cols;
    vector<vector<char>> landmine(rows, vector<char>(cols));
    vector<string> field(rows, string(cols, ' '));

    // Correctly read the entire landmine field
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> landmine[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
          for (int j = 0; j < cols; j++) {
              if (landmine[i][j] == '*') {
                  field[i][j] = '*';
              } else if (landmine[i][j] == '?') {
                  int count = 0;
                  for (int x = max(0, i - 1); x <= min(rows - 1, i + 1); ++x) {
                      for (int y = max(0, j - 1); y <= min(cols - 1, j + 1); ++y) {
                          if (landmine[x][y] == '*' && (x != i || y != j)) {
                              count++;
                          }
                      }
                  }
                  field[i][j] = (count + '0');
              }
          }
    }
    for (auto a : field) {
        for (auto b : a) {
            cout << b;
        }
        cout << endl;
    }
    return 0;
}
