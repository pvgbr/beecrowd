#include <stdio.h>

int main(){
    int n,x1,y1,x2,y2,x,y,i;
    int quant,teste=1;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    while(x1||y1||x2||y2){
        quant=0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d %d",&x,&y);
            if((x>=x1 && x<=x2)&&(y>=y2 && y<=y1)){
                quant++;
            }
        }
        printf("Teste %d\n%d\n",teste,quant);
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        teste++;
    }
    return 0;
}
