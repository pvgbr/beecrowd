#include <stdio.h>

long int vpar[10001],vimpar[10001];
int par=0,impar=0;

void ordena(int v[], int n, int crescente){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if((crescente && v[j] > v[j+1]) || (!crescente && v[j] < v[j+1])){
                temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
}

int main() {
    int i,n;
    long int num;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%ld",&num);
        if(num % 2 == 0){
            vpar[par++] = num;
        }
        else{
            vimpar[impar++] = num;
        }
    }
    ordena(vpar,par,1);
    ordena(vimpar,impar,0);
    for(i=0;i<par;i++){
        printf("%ld\n",vpar[i]);
    }
    for(i=0;i<impar;i++){
        printf("%ld\n",vimpar[i]);
    }

    return 0;
}
