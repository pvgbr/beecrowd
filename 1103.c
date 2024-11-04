#include <stdio.h>

int main(){
    int h1,m1,h2,m2;
    int hora,min;

    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    while(h1 || m1 || h2 || m2){
        if(m2>=m1){
            min = m2-m1;
        }
        else{
            min = (60-m1)+m2;
            h2--;
        }
        if(h2>=h1){
            hora = h2-h1;
        }
        else{
            hora = (24-h1)+h2;
        }
        if(hora < 0){
            hora += 24;
        }
        printf("%d\n",min+(hora*60));
        scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    }

    return 0;
}
