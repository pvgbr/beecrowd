#include <stdio.h>

int main(){
    int h,m;
    float hr,min;

    while(scanf("%d %d",&h,&m) != EOF){
        hr = h/30.0;
        min = m*5.0/30.0;
        printf("%02.0f:%02.0f\n",hr,min);
    }

    return 0;
}
