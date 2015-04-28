#include <stdio.h>

#define FOR(i,p,n) for(int i=p;i <n;i++)
#define MAXTERMS 101

int main(){
    while (true){
        int numOfMonths;
        scanf("%d",&numOfMonths);
        float downPayment;
        scanf("%f",&downPayment);
        float principal;
        scanf("%f",&principal);
        int depreciationTerms;
        scanf("%d",&depreciationTerms);
        float depreciationValues[MAXTERMS];

        if (numOfMonths < 0){
            break;
        }

        int initMonth = 0;
        float previousDepreciation = 0.0;

        while (depreciationTerms--){
            int month;
            float depreciation;
            scanf("%d",&month);
            scanf("%f", &depreciation);
            FOR(i,initMonth ,month ){
                depreciationValues[i] = previousDepreciation;
            }
            initMonth = month;
            previousDepreciation = depreciation;
        }
        FOR(i,initMonth ,MAXTERMS){
            depreciationValues[i] = previousDepreciation;
        }

        float amountOwed = principal;
        float amountAfterDepreciation = principal + downPayment;
        amountAfterDepreciation -= depreciationValues[0] * amountAfterDepreciation;
        float payment = principal / numOfMonths;
        int month = 0;
        
        while (amountOwed >= amountAfterDepreciation){
            month++;
            amountAfterDepreciation = amountAfterDepreciation - ( 
                depreciationValues[month] * amountAfterDepreciation);
            amountOwed -= payment;
        }

        if (month == 1){
            printf("1 month\n");
        }
        else {
            printf("%d months\n",month);
        }
    }
    return 0;
}

