#include <stdio.h>

int main(){
    int hi,mi,hf,mf;
    int horas, minutos;
    scanf("%d %d %d %d",&hi,&mi,&hf,&mf);
    if(hi == hf && mi == mf){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else {
        if(mf>=mi){
            minutos = mf-mi;
        }
        else{
            minutos = (60-mi)+mf;
            hf--;
        }
        if(hf>=hi){
            horas = hf-hi;
        }
        else{
            horas = (24-hi)+hf;
        }
        if(horas<0){
            horas += 24;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",horas,minutos);
    }
    return 0;
}
