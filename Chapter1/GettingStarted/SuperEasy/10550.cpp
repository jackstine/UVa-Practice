#include <stdio.h>
#include <stdlib.h>

int main(){
    int start,first,second,third;
    int sum;
    int degree = 360/40;
    while(true){
        scanf("%d %d %d %d",&start,&first,&second,&third);
        if (start == 0 && first == 0 && second == 0 && third == 0){
            break;
        }
        else{
            sum = 720 ; //setup
            if (first > start){
                sum += degree * ( start + (40 - first));
            }
            else {
                sum += degree * (start - first);
            }
            if ( second > first){
                sum += 360 + (degree * ( second - first));
            }
            else {
                sum += 360 + (degree * ( 40 - first + second ) );
            }
            if (second >= third){
                sum += (second - third) * degree;
            }
            else{
                sum += (second + (40 - third)) * degree; 
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
