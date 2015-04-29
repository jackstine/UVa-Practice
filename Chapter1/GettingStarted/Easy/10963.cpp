#include <stdio.h>
#include <iostream>
#include <string>
#include <cstring>
#include <vector>

#define FOR(i,p,n) for(int i=p;i<n;i++)

int getDistance(int point1, int point2){
    if (point1 == point2){
        return 1;
    }
    int offset = 1;
    int distance = point1 - point2 + offset;
    return distance;
}


int main(){
    int numOfCases;
    scanf("%d",&numOfCases);

    while(numOfCases--){
        int numOfColumns;
        scanf("%d",&numOfColumns);
        int northColumns[numOfColumns];
        int southColumns[numOfColumns];
        int current = 0;
        while(numOfColumns--){
            scanf("%d",&northColumns[current]);
            scanf("%d",&southColumns[current]);
            current++;
        }
        int firstDistance = getDistance(northColumns[0], southColumns[0]);
        bool failed = false;
        FOR(i,1,current){
            if ( firstDistance != getDistance(northColumns[i],southColumns[i])) {
                failed = true;
                break;
            }
        }
        if (failed){
            printf("no\n");
        }
        else{
            printf("yes\n");
        }
        if (numOfCases){
            printf("\n");
        }
    }
    return 0;
}
