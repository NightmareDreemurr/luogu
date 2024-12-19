#include <bits/stdc++.h>
using namespace std;

int main() {
    int p1, p2, p3;
    cin >> p1 >> p2 >> p3;
// 参数 p₁（展开方式）：
// p₁ = 1：对于字母子串，填充小写字母；
// p₁ = 2：对于字母子串，填充大写字母。
// 这两种情况下，数字子串的填充方式相同。p₁ = 3 时，不论是字母子串还是数字子串，都用与要填充的字母个数相同的星号 * 来填充。
    
// 参数 p₂（填充字符的重复个数）：p₂ = k 表示同一个字符要连续填充 k 个。例如，当 p₂ = 3 时，子串 d-h 应扩展为 deeefffgggh。减号两边的字符不变。

// 参数 p₃（是否改为逆序）：
// p₃ = 1：维持原来顺序；
// p₃ = 2：采用逆序输出。
// 注意，这时候仍然不包括减号两端的字符。例如当 p₁ = 1、p₂ = 2、p₃ = 2 时，子串 d-h 应扩展为 dggffeeh。

    string unprocessed;
    string processed;
    cin >> unprocessed;
    char before = '';
    for (auto a : unprocessed) {
        if (a == '-') {

        }
        before = a;
    }

    return 0;
}