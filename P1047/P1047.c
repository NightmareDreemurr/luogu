#include <stdio.h>

int main() {
    int l, m;
    scanf("%d %d", &l, &m);
    l += 1;
    int area[m][2];
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &area[i][0], &area[i][1]);
    }
    int Available[l];
    for (int i = 0; i < l; i++) {
        Available[i] = 1;
    }
    for (int i = 0; i < m; i++) {
        int startPoint = area[i][0];
        int endPoint = area[i][1];
        for (int j = startPoint; j <= endPoint; j++) {
            Available[j] = 0;
        }
    }
    int treesRemaining = 0;
    for (int i = 0; i < l; i++) {
        treesRemaining += Available[i];
    }
    printf("%d\n", treesRemaining);
    return 0;
}
