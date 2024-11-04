#include <stdio.h>
#include <math.h>

int main(){
    int r1,x1,y1,r2,x2,y2;
    int dx,dy;
    double dist;

    while(scanf("%d %d %d %d %d %d",&r1,&x1,&y1,&r2,&x2,&y2) != EOF){
        dx = x2 - x1;
        dy = y2 - y1;
        dist = sqrt(dx*dx + dy*dy);
        if(r1 >= dist+r2){
            printf("RICO\n");
        }
        else{
            printf("MORTO\n");
        }
    }

    return 0;
}
