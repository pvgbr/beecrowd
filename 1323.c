#include <stdio.h>

int main(){
    int n,r;
    while(scanf("%d",&n) && n != 0){
        r = (n*(n+1)*((2*n)+1))/6;
        printf("%d\n",r);
    }
    return 0;
}
