#include <iostream>
using namespace std;
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;
    int a[n];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    qsort(a,n,sizeof(int),compare);
    cout << a[0];
    return 0;
}
