#include <stdio.h>
#include <math.h>

int main(){
    int n,i,s=1;
    scanf("%d",&n);
    if((n>1)&&(n<1000)){
        for(i=1;i<=n*2;i++){
            if(i%2==0){
                printf("%d %d %d\n",s,s*s+1,s*s*s+1);
                s++;
            }
            else{
                printf("%d %d %d\n",s,s*s,s*s*s);
            }
        }
    }
    return 0;
}
