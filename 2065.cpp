#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,m,i,j,tempo=0;
    int itens,melhor;

    scanf("%d %d",&n,&m);

    int *vel = (int *)malloc(n * sizeof(int));
    int *livre = (int *)malloc(n * sizeof(int));

    for(i=0;i<n;i++){
        scanf("%d",&vel[i]);
        livre[i] = 0;
    }
    for(i=0;i<m;i++){
        scanf("%d",&itens);
        melhor = 0;
        for(j=1;j<n;j++){
            if(livre[j] < livre[melhor]){
                melhor = j;
            }
        }
        livre[melhor] += vel[melhor] * itens;
        if(livre[melhor] > tempo){
            tempo = livre[melhor];
        }
    }
    printf("%d\n",tempo);

    free(vel);
    free(livre);
    return 0;
}
