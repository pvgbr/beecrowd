#include <stdio.h>

int main(){
    int i,n,atinge;
    int quant=1000,id=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&atinge);
        if(atinge<quant){
            quant = atinge;
            id = i;
        }
    }
    printf("%d\n",id);
    return 0;
}
