
#include <stdio.h>
int deposit = 0;
void addToDeposit(int amount);


int main() {
    int budget = 0;
    int estimate[12];
    int month = 0;
    for(int i = 0; i < 12; i++){
        scanf("%d",&estimate[i]);
    }
    for(int i = 0; i < 12; i++){
        budget += 300;
        if (budget - estimate[i] >= 100){
            int estimateDeposit = (budget - estimate[i]) / 100 * 100;
            addToDeposit(estimateDeposit);
            budget -= (estimate[i] + estimateDeposit);
        }
        else if (budget - estimate[i] < 100 && budget -estimate[i] >= 0)
        {
            budget -= estimate[i];
        }   
        else{
            month = -(i+1);
            printf("%d", month);
            return 0;
        } 
    }
    int finale = deposit * 1.2 + budget;
    printf("%d",finale);
    return 0;
}

void addToDeposit(int amount){
    deposit += amount;
};

