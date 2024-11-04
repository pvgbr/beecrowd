#include <stdio.h>

int main(){
    int bilh[10001],count[10001];
    int n=1,m=1,i,j,falso=0;
    while(1){
        falso=0;
        for (j=0;j<10001;j++) {
            count[j] = 0;
        }
        scanf("%d %d",&n,&m);
        if (n==0 && m==0){
                break;
        }
        if((n>=1)&&(n<=10000)&&(m>=1)&&(m<=20000)){
            for(i=0;i<m;i++){
                scanf("%d",&bilh[i]);
            }
            for (i=0;i<m;i++) {
                if((bilh[i]>=1) && (bilh[i]<=n)){
                    count[bilh[i]]++;
                }
            }
            for (i=1;i<=n;i++) {
                if (count[i]>1) {
                    falso++;
                }
            }
            printf("%d\n",falso);
        }
    }
    return 0;
}

