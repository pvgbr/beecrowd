#include <stdio.h>

int main(){
    int n;
    float q,c=0,r=0,s=0,total=0;
    char a;

    scanf("%d",&n);
    while(n--){
        scanf("%f %c",&q,&a);
        total += q;
        if(a == 'C') c += q;
        if(a == 'R') r += q;
        if(a == 'S') s += q;
    }
    printf("Total: %0.f cobaias\n",total);
    printf("Total de coelhos: %0.f\n",c);
    printf("Total de ratos: %0.f\n",r);
    printf("Total de sapos: %0.f\n",s);
    printf("Percentual de coelhos: %.2f %%\n",(c/total)*100.0);
    printf("Percentual de ratos: %.2f %%\n",(r/total)*100.0);
    printf("Percentual de sapos: %.2f %%\n",(s/total)*100.0);

    return 0;
}
