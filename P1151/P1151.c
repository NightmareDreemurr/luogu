#include <stdio.h>
int main(){
    int k, mark;
    scanf("%d",&k);
    for (int i = 10000; i <= 30000; i++)
    {
        int sub1 = (i / 100);
        int sub2 = ((i % 10000) / 10);
        int sub3 = (i % 1000);
        if (sub1 % k == 0  && sub1 != 0)
        {
            printf("%d",i);
            mark = 1;
            continue;
        }
        else if (sub2 % k == 0 && sub2 != 0)
        {
            printf("%d\n",i);
            mark = 1;
            continue;
        }
        else if (sub3 % k == 0 && sub3 != 0)
        {
            printf("%d\n",i);
            mark = 1;
            continue;
        }  
    }
    if (mark == 0)
    {
        printf("No");
    }
    return 0;
}