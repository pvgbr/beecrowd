#include <stdio.h>

int main(){
    int n,p,q;
    char c;

    scanf("%d",&n);
    scanf("%d %c %d",&p,&c,&q);
    if(c == '+'){
        if(p+q > n) printf("OVERFLOW\n");
        else printf("OK\n");
    }
    if(c == '*'){
        if(p*q > n) printf("OVERFLOW\n");
        else printf("OK\n");
    }

    return 0;
}
