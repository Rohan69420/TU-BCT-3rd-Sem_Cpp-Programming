#include <stdio.h>
#include <string.h>

int main(){
    char string[]="idea without execution is worthless";
    int len=strlen(string);
    for (int i=0; i<len;i++){
        if (string[i]=='c')
        printf("The position of character c is in: %d\n",i+1);
    }
    return 0;
}