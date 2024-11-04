#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool verifica(char cpf[15]){
    int i,j,somab1=0,somab2=0,countb1=1,countb2=9;
    int d1,d2;
    for(i=0;i<11;i++){
        if(i!=3 && i!=7){
            somab1 = somab1 + countb1*(cpf[i] - '0');
            countb1++;
        }
    }
    d1 = (somab1 % 11);
    if(d1 == 10){
        d1 = 0;
    }
    for(j=0;j<11;j++){
        if(j!=3 && j!=7){
            somab2 = somab2 + countb2*(cpf[j] - '0');
            countb2--;
        }
    }
    d2 = (somab2 % 11);
    if(d2 == 10){
        d2 = 0;
    }
    if((cpf[12] - '0' == d1) && (cpf[13] - '0' == d2)){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    char cpf[15];
    int i;
    while (scanf("%s",cpf) != EOF) {
        if (verifica(cpf)) {
                printf("CPF valido\n");
        } else {
            printf("CPF invalido\n");
        }
    }
    return 0;
}
