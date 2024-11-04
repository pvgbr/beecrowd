#include <stdio.h>
#include <string.h>

int main(){
    int n,m,i,j,h,jogador;
    int pontuacao[10001];
    int maior=0,segundo=0;

    scanf("%d %d",&n,&m);
    while(n||m){
        for(h=0;h<10001;h++){
            pontuacao[h] = 0;
        }
        maior = 0;
        segundo = 0;
        if(n == 0 && m == 0){
            break;
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                scanf("%d",&jogador);
                pontuacao[jogador]++;
            }
        }
        for(i=1;i<10001;i++){
            if(pontuacao[i] > maior){
                maior = pontuacao[i];
            }
        }
        for(i=1;i<10001;i++){
            if((pontuacao[i] > segundo) && (pontuacao[i] < maior)){
                segundo = pontuacao[i];
            }
        }
        for(i=1;i<10001;i++){
            if(pontuacao[i] == segundo){
                printf("%d ",i);
            }
        }
        printf("\n");
        scanf("%d %d",&n,&m);
    }

    return 0;
}
