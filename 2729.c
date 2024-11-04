#include <stdio.h>
#include <string.h>

char listaOrd[21000];

void ordenaLista(char lista[21000]) {
    char itens[1000][21];
    int i,j,count=0,duplicado=0;
    char temp[21];
    char *produto = strtok(lista," ");

    while(produto != NULL){
        duplicado = 0;
        for(i=0;i<count;i++){
            if(strcmp(itens[i],produto) == 0){
                duplicado = 1;
                break;
            }
        }
        if(!duplicado){
            strcpy(itens[count],produto);
            count++;
        }
        produto = strtok(NULL," ");
    }
    for(i=0;i<count-1;i++){
        for(j=i+1;j<count;j++){
            if(strcmp(itens[i],itens[j]) > 0){
                strcpy(temp,itens[i]);
                strcpy(itens[i],itens[j]);
                strcpy(itens[j],temp);
            }
        }
    }
    listaOrd[0] = '\0';
    for(i=0;i<count;i++){
        strcat(listaOrd,itens[i]);
        if(i<count-1){
            strcat(listaOrd," ");
        }
    }
}

int main(){
    int i,n;
    char lista[21000];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++){
        fgets(lista,21000,stdin);
        lista[strcspn(lista,"\n")] = '\0';
        ordenaLista(lista);
        printf("%s\n",listaOrd);
    }

    return 0;
}
