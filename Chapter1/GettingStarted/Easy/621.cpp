#include <stdio.h>
#include <string>
#include <cstring>

using namespace std;

int main(){
    // get init
    int num;
    scanf("%d",&num);

    while(num--){
        char message[1000];
        scanf("%s",message);
        int len = strlen(message);
        if ( message == "1" || strcmp(message, "78") == 0 || message == "4"){
            printf("+\n");
        }
        else if (message[len - 1] == '5' && message[len-2] == '3'){
            printf("-\n");    
        }
        else if (message[0] == '9' && message[len -1 ] == '4'){
            printf("*\n");
        }
        else if ( message[0] == '1' && message[1] == '9' && message[2] =='0'){
            printf("?\n");
        }
    }
    return 0;
}
