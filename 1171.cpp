#include <stdio.h>

int main(){
    int i,n,num;
    int x[2001] = {0};

    scanf("%d",&n);
    while(n--){
        scanf("%d",&num);
        x[num]++;
    }
    for(i=1;i<2001;i++){
        if(x[i]>0){
            printf("%d aparece %d vez(es)\n",i,x[i]);
        }
    }

    return 0;
}
