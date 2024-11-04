#include <stdio.h>

char verifica(int a, int b, int c, int d, int e){
    int conta=0;
    char resp;
    if(a<=127) resp = 'A';
    else conta++;
    if(b<=127) resp = 'B';
    else conta++;
    if(c<=127) resp = 'C';
    else conta++;
    if(d<=127) resp = 'D';
    else conta++;
    if(e<=127) resp = 'E';
    else conta++;

    if(conta==4){
        return resp;
    }
    else{
        return '*';
    }
}

int main(){
    int n,i,a,b,c,d,e;
    while(scanf("%d",&n) && n != 0){
        for(i=0;i<n;i++){
            scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
            printf("%c\n",verifica(a,b,c,d,e));
        }
    }
    return 0;
}
