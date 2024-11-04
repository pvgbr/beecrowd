#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countN(char nk[121]){
    int i,n;
    char ns[4];
    for(i=0;i<strlen(nk);i++){
        if(nk[i]=='!'){
            strncpy(ns,nk,i);
            ns[i] = '\0';
            n = atoi(ns);
            return n;
        }
    }
}

int countK(char nk[121]){
    int i,k=0;
    for(i=0;i<strlen(nk);i++){
        if(nk[i]=='!'){
            k++;
        }
    }
    return k;
}

int main() {
    long long int i,t;
    char nk[121];
    long long int n,k,j=0,total=1;
    scanf("%lld",&t);
    for(i=0;i<t;i++){
        j=0;
        total=1;
        scanf("%s",nk);
        n = countN(nk);
        k = countK(nk);
        while(n-j*k>=1){
            total = total * (n-j*k);
            j++;
        }
        printf("%lld\n",total);
    }

    return 0;
}


