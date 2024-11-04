#include <stdio.h>

int main(){
    long int i,j,x,n,total=0;
    scanf("%ld",&n);
    for(i=0;i<n;i++){
        scanf("%ld",&x);
        total=0;
        j=1;
        for(j=1;j<x;j++){
            if(x % j == 0){
                total = total + j;
            }
        }
        if(total == x){
            printf("%d eh perfeito\n",x);
        }
        else{
            printf("%d nao eh perfeito\n",x);
        }
    }
    return 0;
}
