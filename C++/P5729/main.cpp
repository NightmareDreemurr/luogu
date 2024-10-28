#include <iostream>
using namespace std;
int main()
{
    int w,x,h,q,x1,y1,z1,x2,y2,z2,count = 0;
    cin >> w >> x >> h >> q;
    int cube[w][x][h];
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < x; j++) {
            for (int k = 0; k < h; k++) {
                cube[i][j][k] = 1;
            }
        }
    }
    for (int i = 0; i < q; i++) {
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;

        for (int j = x1 - 1; j <= x2 - 1; j++) {
            for (int k = y1 - 1; k <= y2 - 1; k++) {
                for (int l = z1 - 1; l <= z2 - 1; l++) {
                    cube[j][k][l] = 0;
                }
            }
        }
    }

    for (int i = 0; i < w; i++) {
        for (int j = 0; j < x; j++) {
            for (int k = 0; k < h; k++) {
                count += cube[i][j][k];
            }
        }
    }

    cout << count << endl;

    return 0;
}
