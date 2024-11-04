#include <stdio.h>

int call;

int fib(int n){
    call++;
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}

int main(){
    int n,x,fibo;
    scanf("%d",&n);
    while(n--){
        call = 0;
        scanf("%d",&x);
        fibo = fib(x);
        printf("fib(%d) = %d calls = %d\n",x,call-1,fibo);
    }
    return 0;
}
