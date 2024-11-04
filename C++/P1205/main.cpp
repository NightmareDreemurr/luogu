#include <bits/stdc++.h>
using namespace std;
vector<vector<char>> turn90(const vector<vector<char>> &image_given){
    vector<vector<char>> temp_image;
    temp_image.resize(image_given.size());
    for(int i=0;i<image_given.size();i++) {
        temp_image[i].resize(image_given[i].size());
    }
    for(int i=0;i<image_given.size();i++) {
        for(int j=0;j<image_given[i].size();j++) {
            temp_image[j][image_given.size() - i - 1] = image_given[i][j];
        }
    }
    return temp_image;
}
vector<vector<char>> turn180(const vector<vector<char>> &image_given){
    vector<vector<char>> temp_image;
    temp_image.resize(image_given.size());
    for(int i=0;i<image_given.size();i++) {
        temp_image[i].resize(image_given[i].size());
    }
    for(int i=0;i<image_given.size();i++) {
        for(int j=0;j<image_given.size();j++) {
            temp_image[image_given.size() - i - 1][image_given.size() - j - 1] = image_given[i][j];
        }
    }
    return temp_image;
}
vector<vector<char>> turn270(const vector<vector<char>> &image_given){
    vector<vector<char>> temp_image;
    temp_image.resize(image_given.size());
    for(int i=0;i<image_given.size();i++) {
        temp_image[i].resize(image_given[i].size());
    }
    for(int i=0;i<image_given.size();i++) {
        for(int j=0;j<image_given.size();j++) {
            temp_image[image_given.size() - j - 1][i] = image_given[i][j];
        }
    }
    return temp_image;
}
vector<vector<char>> mirror(const vector<vector<char>> &image_given) {
    vector<vector<char>> temp_image;
    temp_image.resize(image_given.size());
    for(int i = 0; i < image_given.size(); i++) {
        temp_image[i].resize(image_given[i].size());
    }
    for(int i=0;i<image_given.size();i++) {
        for(int j=0;j<image_given.size();j++) {
            temp_image[i][image_given.size() - j - 1] = image_given[i][j];
        }
    }
    return temp_image;
}
int main()
{
    vector<vector<char>> startup_image_given;
    vector<vector<char>> processed_image_given;
    int n;
    cin >> n;
    startup_image_given.resize(n);
    processed_image_given.resize(n);
    for (int i = 0; i < n; i++) {
        startup_image_given[i].resize(n);
        processed_image_given[i].resize(n);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> startup_image_given[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> processed_image_given[i][j];
        }
    }
    vector<vector<char>> processed_image_1 = turn90(startup_image_given);;
    vector<vector<char>> processed_image_2 = turn180(startup_image_given);;
    vector<vector<char>> processed_image_3 = turn270(startup_image_given);;
    vector<vector<char>> processed_image_4 = mirror(startup_image_given);;
    vector<vector<char>> processed_image_5_1 = turn90(mirror(startup_image_given));;
    vector<vector<char>> processed_image_5_2 = turn180(mirror(startup_image_given));
    vector<vector<char>> processed_image_5_3 = turn270(mirror(startup_image_given));
    if(processed_image_1 == processed_image_given) {                                                                                                                        // 转 90°：图案按顺时针转 90°。
        cout << 1;
    } else if(processed_image_2 == processed_image_given) {                                                                                                                 // 转 180°：图案按顺时针转 180°。
        cout << 2;
    } else if(processed_image_3 == processed_image_given) {                                                                                                                 // 转 270°：图案按顺时针转 270°。
        cout << 3;
    } else if(processed_image_4 == processed_image_given) {                                                                                                                 //反射：图案在水平方向翻转（以中央铅垂线为中心形成原图案的镜像）。
        cout << 4;
    } else if(processed_image_5_1 == processed_image_given || processed_image_5_2 == processed_image_given || processed_image_5_3 == processed_image_given) {               //组合：图案在水平方向翻转，然后再按照 1∼3 之间的一种再次转换。
        cout << 5;
    } else if(startup_image_given == processed_image_given) {                                                                                                               //不改变：原图案不改变。
        cout << 6;
    } else {                                                                                                                                                                // 无效转换：无法用以上方法得到新图案。
        cout << 7;
    }
    return 0;
}
