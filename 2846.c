#include <stdio.h>

int fibonacci(int n){
    int a=0,b=1,c;
    while(b < n){
        c = a + b;
        a = b;
        b = c;
    }
    return (b == n);
}

int main(){
    int k,count=0,num=1;
    scanf("%d",&k);
    while(count < k){
        if(fibonacci(num) == 0){
            count++;
        }
        num++;
    }
    printf("%d\n",num-1);
    return 0;
}

