#include <stdio.h>

int main(){
    int i,n,tam,pares;
    int dir[61] = {0};
    int esq[61] = {0};
    char lado;

    while(scanf("%d",&n) != EOF){
        pares = 0;
        for(i=30;i<61;i++){
            dir[i] = 0;
            esq[i] = 0;
        }
        while(n--){
            scanf("%d %c",&tam,&lado);
            if(lado == 'D'){
                dir[tam]++;
            }
            else{
                esq[tam]++;
            }
        }
        for(i=30;i<61;i++){
            if(dir[i] > 0 && esq[i] > 0){
                while(dir[i] > 0 && esq[i] > 0){
                    dir[i]--;
                    esq[i]--;
                    pares++;
                }
            }
        }
        printf("%d\n",pares);
    }

    return 0;
}
