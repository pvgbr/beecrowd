#include <stdio.h>
#include <string.h>

int main(){
    int i,j,k,l,n,tam,met;
    char txt[1001],aux[1001];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++){
        gets(txt);
        tam = strlen(txt);
        aux[tam] = '\0';
        for(j=0;j<tam;j++){
            if((txt[j]>=65 && txt[j]<=90)||(txt[j]>=97 && txt[j]<=122)){
                txt[j] = txt[j]+3;
            }
        }
        for(k=0;k<tam;k++){
            aux[k]=txt[tam-1-k];
        }
        met = tam/2;
        for(l=met;l<tam;l++){
            aux[l] = aux[l]-1;
        }
        printf("%s\n",aux);
    }
    return 0;
}

