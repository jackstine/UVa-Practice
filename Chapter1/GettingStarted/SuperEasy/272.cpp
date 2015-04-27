#include <stdio.h>



int main(){
    char cs = 'c';
    bool first = true;
    while (scanf("%c",&cs) != EOF){
        if (cs == '"' ){
            if (first){
                printf("``");
                first = false;
            }
            else{
                printf("''");
                first = true;
            }
        }
        else{
            putchar(cs);
        }
    }
    return 0;   
}
