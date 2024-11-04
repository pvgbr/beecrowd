#include <stdio.h>

int main(){
    int idade;
    int y,m,d,resto;
    scanf("%d",&idade);
    y = idade/365;
    resto = idade % 365;
    m = resto/30;
    resto = resto % 30;
    d = resto;
    printf("%d ano(s)\n",y);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",d);
    return 0;
}
