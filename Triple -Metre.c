#include <stdio.h>
#include <stdbool.h>
#include <string.h>


bool func(char *str){
    char S[11];
    scanf("%s",S);
    if(strstr(str,S) != NULL){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    if(func("oxxoxxoxxoxx")  == true){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
}
