#include <iostream>
using namespace std;

int compare(const void* a,const void* b) {
    return *(int*)a - *(int*)b;
}

int main() {
    int numbers[3];
    char char_index[3];
    int int_index[3];
    scanf("%d %d %d\n%c%c%c",&numbers[0],&numbers[1],&numbers[2],&char_index[0],&char_index[1],&char_index[2]);
    qsort(numbers,3,sizeof(int),compare);

    for(int i=0;i<3;i++) {
        if (char_index[i] == 'A') {
            int_index[i] = 0;
            continue;
        }
        if (char_index[i] == 'B') {
            int_index[i] = 1;
            continue;
        }
        if (char_index[i] == 'C') {
            int_index[i] = 2;
        }
    }
    cout << numbers[int_index[0]] << " " << numbers[int_index[1]] << " "  << numbers[int_index[2]];
    return 0;
}
