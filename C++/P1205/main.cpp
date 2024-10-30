#include <bits/stdc++.h>
using namespace std;



int main()
{
    vector<vector<char>> startup_image;
    vector<vector<char>> processed_image;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> startup_image[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> processed_image[i][j];
        }
    }
    if() {                      // 转 90°：图案按顺时针转 90°。

    } else if() {               // 转 180°：图案按顺时针转 180°。

    } else if() {               // 转 270°：图案按顺时针转 270°。

    } else if() {               //反射：图案在水平方向翻转（以中央铅垂线为中心形成原图案的镜像）。

    } else if() {               //组合：图案在水平方向翻转，然后再按照 1∼3 之间的一种再次转换。

    } else if() {               //不改变：原图案不改变。

    } else if() {               //无效转换：无法用以上方法得到新图案。

    } else {                    // 无效转换：无法用以上方法得到新图案。

    }


    return 0;
}
