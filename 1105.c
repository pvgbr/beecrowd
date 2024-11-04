#include <stdio.h>

int main(){
    int i,b,n,devedor,credor,valor;
    int reservas[20],possivel;

    while(1){
        scanf("%d %d",&b,&n);
        if(b==0 && n==0){
                break;
        }
        for(i=0;i<b;i++){
            scanf("%d",&reservas[i]);
        }
        for(i=0;i<n;i++){
            scanf("%d %d %d",&devedor,&credor,&valor);
            reservas[devedor - 1] -= valor;
            reservas[credor - 1] += valor;
        }
        possivel = 1;
        for(i=0;i<b;i++){
            if(reservas[i]<0){
                possivel = 0;
                break;
            }
        }
        if(possivel){
            printf("S\n");
        }
        else{
            printf("N\n");
        }
    }

    return 0;
}
