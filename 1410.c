#include <stdio.h>

int main(){
    int a,d,i,j,h,imp=0,pen,ult;
    int b[12],c[12];
    scanf("%d %d",&a,&d);
        while((a>=2)&&(a<=11)&&(d>=2)&&(d<=11)){
            imp=0;
            ult=100000;
            pen=100000;
            for(i=0;i<a;i++){
                scanf("%d",&b[i]);
            }
            for(i=0;i<d;i++){
                scanf("%d",&c[i]);
            }
            for(i=0;i<d;i++){
                if(c[i]<ult){
                    pen = ult;
                    ult = c[i];
                }
                else{
                    if(c[i]<pen){
                        pen = c[i];
                    }
                }
            }
            for(i=0;i<a;i++){
                if(b[i]<pen){
                    imp = 1;
                    break;
                }
            }
            if(imp){
                printf("Y\n");
            }
            else{
                printf("N\n");
            }
            scanf("%d %d",&a,&d);
        }
    return 0;
}
