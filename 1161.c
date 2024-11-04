#include <stdio.h>

int main(){
    long long int n=0,m=0;
    int i;
    while(scanf("%lld %lld",&n,&m) != EOF){
        if((n>=0)&&(n<=20)&&(m>=0)&&(m<=20)){
            if(n>1){
                i=n-1;
                while(i>0){
                    n=n*i;
                    i--;
                }
            }
            else{
                n=1;
            }
            if(m>1){
                i=m-1;
                while(i>0){
                    m=m*i;
                    i--;
                }
            }
            else{
                m=1;
            }
            printf("%lld\n",m+n);
        }
        else{
            break;
        }
    }
    return 0;
}
