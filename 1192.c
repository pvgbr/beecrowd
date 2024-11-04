#include <stdio.h>

int main(){
    int n,x,y,i;
    char w;
    char s[4];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",s);
        x = s[0] - '0';
        y = s[2] - '0';
        w = s[1];
        if(x==y){
            printf("%d\n",x*y);
        }
        else{
            if(w>=65 && w<=90){
                printf("%d\n",y-x);
            }
            else{
                printf("%d\n",x+y);
            }
        }
    }
    return 0;
}
