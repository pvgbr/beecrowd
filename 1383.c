#include <stdio.h>
#include <stdbool.h>

bool verificaLinha(int jogo[9][9]){
    int i,j;
    int ver[10];

    for(i=0;i<9;i++){
        for(j=0;j<10;j++){
            ver[j] = 0;
        }
        for(j=0;j<9;j++){
            int num = jogo[i][j];
            if(num > 9 || num < 1 || ver[num]){
                return false;
            }
            ver[num] = 1;
        }
    }
    return true;
}

bool verificaColuna(int jogo[9][9]){
    int i,j;
    int ver[10];

    for(j=0;j<9;j++){
        for(i=0;i<10;i++){
            ver[i] = 0;
        }
        for(i=0;i<9;i++){
            int num = jogo[i][j];
            if(num > 9 || num < 1 || ver[num]){
                return false;
            }
            ver[num] = 1;
        }
    }
    return true;
}

bool verificaBloco(int jogo[9][9]){
    int bloco,i,j;
    int lin,col,num;
    int ver[10];

    for(bloco=0;bloco<9;bloco++){
        for(j=0;j<10;j++){
            ver[j] = 0;
        }
        lin = (bloco / 3) * 3;
        col = (bloco % 3) * 3;
        for(i=lin;i<lin+3;i++){
            for(j=col;j<col+3;j++){
                num = jogo[i][j];
                if(num < 1 || num > 9 || ver[num]){
                    return false;
                }
                ver[num] = 1;
            }
        }
    }
    return true;
}

bool verificaSdk(int jogo[9][9]){
    if(verificaLinha(jogo) && verificaColuna(jogo) && verificaBloco(jogo)){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n,k,i,j;
    int jogo[9][9];

    scanf("%d",&n);
    for(k=1;k<=n;k++){
        for(i=0;i<9;i++){
            for(j=0;j<9;j++){
                scanf("%d",&jogo[i][j]);
            }
        }
        printf("Instancia %d\n", k);
        if(verificaSdk(jogo)){
            printf("SIM\n");
        }
        else{
            printf("NAO\n");
        }
        printf("\n");
    }
    return 0;
}
