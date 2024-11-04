#include <stdio.h>
#include <string.h>

int main(){
    int i,n,atingido,t,alturas[50];
    char pulos[51];

    scanf("%d",&n);
    while(n--){
        scanf("%d",&t);
        for(i=0;i<t;i++){
            scanf("%d",&alturas[i]);
        }
        scanf("%s",pulos);
        atingido = 0;
        for (i=0;i<t;i++){
            if((pulos[i] == 'S' && alturas[i] <= 2) || (pulos[i] == 'J' && alturas[i] > 2)){
                atingido++;
            }
        }
        printf("%d\n",atingido);
    }

    return 0;
}
