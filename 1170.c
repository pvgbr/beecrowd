#include <stdio.h>

int main(){
    int n,dia=1;
    float rest=2.0,food;

    scanf("%d",&n);
    while(n--){
        rest=2.0;
        dia=1;
        scanf("%f",&food);
        rest = food/2.0;
        while(rest>1.0){
            rest = rest/2.0;
            dia++;
        }
        printf("%d dias\n",dia);
    }

    return 0;
}
