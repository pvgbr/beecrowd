#include <stdio.h>
#include <string.h>

int main(){
    char frase[1001], teclado[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    int i,j;

    while(gets(frase) != NULL){
        for(i=0;frase[i] != '\0';i++){
            if(frase[i] == ' '){
                printf(" ");
            }
            else{
                for(j=1;teclado[j] != '\0';j++){
                    if(frase[i] == teclado[j]){
                        printf("%c",teclado[j-1]);
                        break;
                    }
                }
            }
        }
        printf("\n");
    }

    return 0;
}
