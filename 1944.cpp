#include <stdio.h>
#include <string.h>

int main(){
    int n,brindes=0,i,tam=4;
    char painel[400],entrada[5],inverso[5];

    scanf("%d",&n);
    strcpy(painel,"FACE");
    for(i=0;i<n;i++){
        scanf("%s %s %s %s",&entrada[0],&entrada[1],&entrada[2],&entrada[3]);
        inverso[0] = entrada[3];
        inverso[1] = entrada[2];
        inverso[2] = entrada[1];
        inverso[3] = entrada[0];
        inverso[4] = '\0';
        if(tam >= 4 && strncmp(&painel[tam-4],inverso,4) == 0){
            brindes++;
            tam -= 4;
            painel[tam] = '\0';
        }
        else{
            strcat(painel,entrada);
            tam += 4;
        }
        if(tam == 0){
            strcpy(painel,"FACE");
            tam = 4;
        }
    }
    printf("%d\n",brindes);

    return 0;
}
