#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, max = -1, besty, bests, bestw;
    string best;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        string name;
        int y, s, w, total;
        cin >> name >> y >> s >> w;
        total = y + w + s;
        if (total > max) {
            max = total;
            besty = y;
            bests = s;
            bestw = w;
            best = name;
        }
    }
    cout << best << " " << besty <<  " " << bests <<  " " << bestw << endl;
    return 0;
}
