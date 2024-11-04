#include <stdio.h>
#include <math.h>

int verifica(int x){
    if(x <= 1) return 0;
    if(x == 2) return 1;
    if(x % 2 == 0) return 0;

    for(int i=3;i<=sqrt(x);i+=2){
        if(x % i == 0) return 0;
    }

    return 1;
}

int main(){
    int n,x;

    scanf("%d",&n);

    while(n--){
        scanf("%d",&x);
        if (verifica(x)){
            printf("Prime\n");
        }
        else{
            printf("Not Prime\n");
        }
    }

    return 0;
}
