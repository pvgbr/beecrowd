#include <stdio.h>

int main() {
    int h,z,l;
    scanf("%d %d %d",&h,&z,&l);
    if((z>h && z<l)||(z<h && z>l)){
        printf("zezinho\n");
    }
    if((l<h && l>z)||(l>h && l<z)){
        printf("luisinho\n");
    }
    if((h<z && h>l)||(h>z && h<l)){
        printf("huguinho\n");
    }
    return 0;
}
