#include <stdio.h>

int main(){
    int i,f;
    scanf("%d %d",&i,&f);
    if((i>=0)&&(i<=23)&&(f>=0)&&(f<=23)){
        if(i==f){
            printf("O JOGO DUROU 24 HORA(S)");
        }
        else{
            if(i<f){
                printf("O JOGO DUROU %d HORA(S)",f-i);
            }
            else{
                printf("O JOGO DUROU %d HORA(S)",(24-i)+f);
            }
        }
    }
    return 0;
}
