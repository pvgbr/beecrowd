#include <stdio.h>

int sobrev(int n, int k){
    int i,res=0;
    for(i=1;i<=n;i++){
        res = (res+k) % i;
    }
    return res + 1;
}

int main(){
    int i,nc,n,k;
    scanf("%d",&nc);
    for(i=1;i<=nc;i++){
        scanf("%d %d",&n,&k);
        printf("Case %d: %d\n",i,sobrev(n,k));
    }

    return 0;
}
