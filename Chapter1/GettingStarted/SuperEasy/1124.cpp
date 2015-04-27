#include <stdio.h>

int main(){
    char c[100];
    while(fgets(c,sizeof(c),stdin)){
        printf("%s",c);
    }
    return 0;
}
