#include <stdio.h>
#include <string.h>

int main(){
    int i,j,k,n,l,total=0,pos;
    char seq[51];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        total=0;
        scanf("%d",&l);
        for(j=0;j<l;j++){
            scanf("%s",seq);
            for(k=0;k<strlen(seq);k++){
                pos = seq[k] - 65;
                total = total + pos + j + k;
            }
        }
        printf("%d\n",total);
    }
    return 0;
}
