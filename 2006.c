#include <stdio.h>

int main(){
    int t,v[5],conta=0;
    scanf("%d",&t);
    for(int i=0;i<5;i++) scanf("%d",&v[i]);
    for(int i=0;i<5;i++){
        if(v[i] == t) conta++;
    }
    printf("%d\n",conta);

    return 0;
}
