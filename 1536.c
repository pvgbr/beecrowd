#include <stdio.h>

int main(){
    int n,g1casa,g1fora,g2casa,g2fora,t1,t2;

    scanf("%d",&n);
    while (n--){
        scanf("%d x %d",&g1casa,&g2fora);
        scanf("%d x %d",&g2casa,&g1fora);
        t1 = (g1casa+g1fora) - (g2casa+g2fora);
        t2 = -t1;

        if(t1 > t2) printf("Time 1\n");
        else if(t2 > t1) printf("Time 2\n");
        else{
            if(g1fora > g2fora) printf("Time 1\n");
            else if(g2fora > g1fora) printf("Time 2\n");
            else printf("Penaltis\n");
        }
    }

    return 0;
}
