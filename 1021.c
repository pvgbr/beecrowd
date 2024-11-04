#include <stdio.h>
#include <math.h>

int main(){
    double n,dec,nint;
    int ni;
    int n1,n2,n3,n4,n5,n6,m1,m2=0,m3=0,m4=0,m5=0,m6=0,r;
    scanf("%lf",&n);
    ni = n;
    dec = n - ni;
    if(n>=0.00 && n<=1000000.00){
        n1 = ni/100;
        r = ni % 100;
        n2 = r/50;
        r = r % 50;
        n3 = r/20;
        r = r % 20;
        n4 = r/10;
        r = r % 10;
        n5 = r/5;
        r = r % 5;
        n6 = r/2;
        r = r % 2;
        m1 = r/1;
        while((dec-0.50)>0){
            dec = dec - 0.50;
            m2++;
        }
        while((dec-0.25)>0){
            dec = dec - 0.25;
            m3++;
        }
        while((dec-0.10)>0){
            dec = dec - 0.10;
            m4++;
        }
        while((dec-0.05)>0){
            dec = dec - 0.05;
            m5++;
        }
        while((dec-0.01)>0){
            dec = dec - 0.01;
            m6++;
        }
        printf("NOTAS:\n");
        printf("%d nota(s) de R$ 100.00\n",n1);
        printf("%d nota(s) de R$ 50.00\n",n2);
        printf("%d nota(s) de R$ 20.00\n",n3);
        printf("%d nota(s) de R$ 10.00\n",n4);
        printf("%d nota(s) de R$ 5.00\n",n5);
        printf("%d nota(s) de R$ 2.00\n",n6);
        printf("MOEDAS:\n");
        printf("%d moeda(s) de R$ 1.00\n",m1);
        printf("%d moeda(s) de R$ 0.50\n",m2);
        printf("%d moeda(s) de R$ 0.25\n",m3);
        printf("%d moeda(s) de R$ 0.10\n",m4);
        printf("%d moeda(s) de R$ 0.05\n",m5);
        printf("%d moeda(s) de R$ 0.01\n",m6);
    }
    return 0;
}
