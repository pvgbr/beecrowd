#include <stdio.h>

int verifica(int x1, int y1, int x2, int y2){
    int i;
    if(x1 == x2 && y1 == y2){
        return 0;
    }
    else{
        if((x1 == x2 && y1 != y2)||(x1 != x2 && y1 == y2)){
            return 1;
        }
        else{
            if(x1+y1 == x2+y2){
                return 1;
            }
            else{
                if(x1-y1 == x2-y2){
                    return 1;
                }
                else{
                    return 2;
                }
            }
        }
    }
}

int main(){
    int x1,y1,x2,y2;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    while(x1||y1||x2||y2){
        printf("%d\n",verifica(x1,y1,x2,y2));
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    }

    return 0;
}
