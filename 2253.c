#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
    char senha[50];

    while(scanf(" %[^\n]",senha) != EOF){
        bool r1a=false,r1b=false,r1c=false,r2=true,r3=true;
        if(strlen(senha) >= 6 && strlen(senha) <= 32) r3 = true;
        else r3 = false;
        for(int i=0;i<strlen(senha);i++){
            if(senha[i] >= 65 && senha[i] <= 90) r1a = true;
            if(senha[i] >= 97 && senha[i] <= 122) r1b = true;
            if(senha[i] >= 48 && senha[i] <= 57) r1c = true;
            if(senha[i] == ' ') r2 = false;
            if((senha[i] >= 0 && senha[i] <= 47)
               || (senha[i] >= 58 && senha[i] <= 64)
               || (senha[i] >= 91 && senha[i] <= 96)
               || (senha[i] >= 123 && senha[i] <= 127)) r2 = false;
        }
        if(r1a && r1b && r1c && r2 && r3) printf("Senha valida.\n");
        else printf("Senha invalida.\n");
    }
    return 0;
}
