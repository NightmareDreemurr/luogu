#include <bits/stdc++.h>
using namespace std;

struct magic {
    int x;
    int y;
    int r;
    int z;
};

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
    for(int i = 0; i < magics.size(); i++) {
        vector<vector<int>> temp_matrix;
        temp_matrix.resize(magics[i].r * 2 + 1);
        for(auto &a : temp_matrix) {
            a.resize(magics[i].r * 2 + 1);
        }
        for(int j = magics[i].x - magics[i].r - 1; j < magics[i].x - magics[i].r; j++) {
            for(int k = magics[i].y - magics[i].r - 1; k < magics[i].y - magics[i].r; k++) {
                int temp = matrix[j][k];
                int hang = j - (magics[i].x - magics[i].r);
                int lie = k - (magics[i].x - magics[i].r);
                if(magics[i].z == 1) {
                    temp_matrix[lie][magics[i].r * 2 + 1 - hang] = temp;
                } else if (magics[i].z == 2) {
                    temp_matrix[magics[i].r * 2 + 1 - lie][hang] = temp;
                }
            }
        }
        int a;
    }
    return 0;
}
