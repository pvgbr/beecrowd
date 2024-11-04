#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool verifica(char numa[1001], char numb[1001]){
    int i,j=0;
    if(strlen(numb)>strlen(numa)){
        return false;
    }
    for(i=strlen(numa)-strlen(numb);i<strlen(numa);i++){
        if(numa[i] == numb[j]){
            j++;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    char numA[1001];
    char numB[1001];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",numA);
        scanf("%s",numB);
        if(verifica(numA,numB)){
            printf("encaixa\n");
        }
        else{
            printf("nao encaixa\n");
        }
    }
    return 0;
}

