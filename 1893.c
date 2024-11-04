#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(b>=0 && b<=2) printf("nova\n");
    if(b>=97 && b<=100) printf("cheia\n");
    if((b>=3 && b<=96) && (b>=a)) printf("crescente\n");
    if((b>=3 && b<=96) && (a>=b)) printf("minguante\n");

    return 0;
}
