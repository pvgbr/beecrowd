#include <stdio.h>

int main(){
    int a,b,c;

    while(scanf("%d %d %d",&a,&b,&c) != EOF){
        if(a == b && b == c) printf("*\n");
        else if(a == b && a != c) printf("C\n");
        else if(a == c && a != b) printf("B\n");
        else printf("A\n");
    }
    return 0;
}
