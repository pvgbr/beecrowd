#include <stdio.h>

int main() {
    int p,q,i,prod;
    float total=0.0;
    scanf("%d",&p);
    for(i=0;i<p;i++){
        scanf("%d %d",&prod,&q);
        if(prod == 1001){
            total = total + 1.5*q;
        }
        if(prod == 1002){
            total = total + 2.5*q;
        }
        if(prod == 1003){
            total = total + 3.5*q;
        }
        if(prod == 1004){
            total = total + 4.5*q;
        }
        if(prod == 1005){
            total = total + 5.5*q;
        }
    }
    printf("%.2f\n",total);

    return 0;
}

