#include <stdio.h>
#include <stdbool.h>

bool primo(long int num){
    int i,div=0;
    for(i=1;i<=num;i++){
        if(num%i == 0){
            div++;
        }
    }
    if(div == 2){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int i,n;
    long num;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%ld",&num);
        if(primo(num)){
            printf("%ld eh primo\n",num);
        }
        else{
            printf("%ld nao eh primo\n",num);
        }
    }
    return 0;
}
