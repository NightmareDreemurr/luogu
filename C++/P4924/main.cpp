#include <bits/stdc++.h>
using namespace std;

struct magic {
    int x;
    int y;
    int r;
    int z;
};

vector<vector<int>> matrix_rotation(vector<vector<int>> input_matrix,int isCounterClockwise) {
    int n = input_matrix.size();
    vector output_matrix(n,vector<int>(n,0));
    if(!isCounterClockwise) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                output_matrix[j][n - 1 - i] = input_matrix[i][j];
            }
        }
    } else {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                output_matrix[n - 1 - j][i] = input_matrix[i][j];
            }
        }
    }
    return output_matrix;
}

int main() {
    int size, magic_playtime;
    cin >> size >> magic_playtime;
    vector<magic> magics;
    for (int i = 0; i < magic_playtime; i++) {
        int x, y, r, z;
        cin >> x >> y >> r >> z;
        magics.push_back(magic(x, y, r, z));
    }
    vector<vector<int>> matrix;
    matrix.resize(size);
    int count = 1;
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            matrix[i].push_back(count);
            count++;
        }
    }
    for(auto i : magics) {
        int x = i.x;
        int y = i.y;
        int r = i.r;
        int z = i.z;
        vector temp_matrix(r * 2 + 1, vector<int>(r * 2 + 1, 0));
        for(int h = x - 1 - r; h < x + r; h++) {
            for(int l = y - 1 - r; l < y + r; l++) {
                temp_matrix[h - (x - 1 - r)][l - (y - 1 - r)] = matrix[h][l];
            }
        }
        vector<vector<int>> temp_matrix_rotated = matrix_rotation(temp_matrix, z);
        for(int h = x - 1 - r; h < x + r; h++) {
            for(int l = y - 1 - r; l < y + r; l++) {
                matrix[h][l] = temp_matrix_rotated[h - (x - 1 - r)][l - (y - 1 - r)];
            }
        }
        for(int h = x - 1 - r; h < x + r; h++) {
            for(int l = y - 1 - r; l < y + r; l++) {
                matrix[h][l] = temp_matrix_rotated[h - (x - 1 - r)][l - (y - 1 - r)];
            }
        }
    }
    for(auto a : matrix) {
        for(auto b: a) {
            cout << b << " ";
        }
        cout << endl;
    }
    return 0;
}
