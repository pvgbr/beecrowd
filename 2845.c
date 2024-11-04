#include <stdio.h>

int main() {
    int i,n,maior=0,atual,duende;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&duende);
        if(duende>maior){
            maior = duende;
        }
    }
    printf("%d\n",maior+1);

    return 0;
}
