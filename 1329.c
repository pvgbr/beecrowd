#include <stdio.h>

int main(){
    int n,r,m,j;

    while(scanf("%d",&n) && n){
        m = 0;
        j = 0;
        while(n--){
            scanf("%d",&r);
            if(r == 0) m++;
            else if(r == 1) j++;
        }
        printf("Mary won %d times and John won %d times\n",m,j);
    }

    return 0;
}
