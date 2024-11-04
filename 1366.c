#include <stdio.h>

int main(){
    int i,n;
    int tam[1000],quant[1000],ret=0;

    while(scanf("%d",&n) && n != 0){
        ret = 0;
        for(i=0;i<n;i++){
            scanf("%d %d",&tam[i],&quant[i]);
            ret += quant[i]/2;
        }
        printf("%d\n",ret/2);
    }

    return 0;
}
