#include <stdio.h>

int main(){
    int k=1,n,m,x,y;
    while(k!=0){
        scanf("%d",&k);
        if((k>0)&&(k<=1000)){
            scanf("%d %d",&n,&m);
            if((n>-10000)&&(n<10000)&&(m>-10000)&&(m<10000)){
                while(k){
                    scanf("%d %d",&x,&y);
                    if((x>=-10000)&&(x<=10000)&&(y>=-10000)&&(y<=10000)){
                        if((x==n)||(y==m)){
                            printf("divisa\n");
                        }
                        else{
                            if((x>n)&&(y>m)){
                                printf("NE\n");
                            }
                            else{
                                if((x<n)&&(y>m)){
                                    printf("NO\n");
                                }
                                else{
                                    if((x>n)&&(y<m)){
                                        printf("SE\n");
                                    }
                                    else{
                                        printf("SO\n");
                                    }
                                }
                            }
                        }
                    }
                    k--;
                }
                k=1;
            }
        }
        else{
            break;
        }
    }
    return 0;
}
