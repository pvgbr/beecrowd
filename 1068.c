#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool verifica(char expr[1001]){
    int i,parenteses=0;
    for(i=0;i<strlen(expr);i++){
        if(parenteses==0 && expr[i] == ')'){
            return false;
        }
        if(expr[i] == '('){
            parenteses++;
        }
        else{
            if(expr[i] == ')'){
                parenteses--;
            }
        }
    }
    if(parenteses==0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int i;
    char expr[1001];

    while(scanf("%s",expr) != EOF){
        if(verifica(expr)){
            printf("correct\n");
        }
        else{
            printf("incorrect\n");
        }
    }

    return 0;
}
