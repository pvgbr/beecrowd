#include <stdio.h>

int main(){
    unsigned int a,b,resultado;
    while(scanf("%u %u",&a,&b) != EOF){
        resultado = a^b;
        printf("%u\n",resultado);
    }

    return 0;
}
