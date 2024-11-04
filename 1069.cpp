#include <stdio.h>
#include <string.h>

int verifica(char *txt){
    int i;
    int diam=0,contador=0;

    for(i=0;txt[i] != '\0';i++){
        if(txt[i] == '<'){
            contador++;
        }
        else{
            if (txt[i] == '>' && contador > 0){
                diam++;
                contador--;
            }
        }
    }
    return diam;
}

int main(){
    int n;

    scanf("%d",&n);
    while (n--) {
        char txt[1001];
        scanf("%s",txt);
        printf("%d\n",verifica(txt));
    }
    return 0;
}
