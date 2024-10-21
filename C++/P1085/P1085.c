#include <stdio.h>

void swapArrays(int arr1[2], int arr2[2]);

int main() {
    int angry[7][2] = {0};

    for(int i = 0; i < 7; i++){
        int class, extra;
        scanf("%d %d", &class, &extra); 
        int overall = class + extra;
        if(overall > 8){
            angry[i][1] = overall - 8; 
        }
        angry[i][0] = i + 1;
    }

    for(int i = 1; i < 7; i++){
        if(angry[i-1][1] < angry[i][1]){
            swapArrays(angry[i-1], angry[i]); 
            i = 0;
        }
    }

   if(angry[0][1] == 0){
        printf("%d",0);
   }
   else{
        printf("%d", angry[0][0]);
   }
    return 0;
}

void swapArrays(int arr1[2], int arr2[2]) {
    for (int i = 0; i < 2; i++) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}
