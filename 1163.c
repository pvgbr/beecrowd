#include <stdio.h>
#include <math.h>

#define G 9.80665
#define PI 3.14159

int main(){
    double h,ang,speed,dist,rad;
    int p1,p2,n,i;

    while(scanf("%lf",&h) != EOF){
        scanf("%d %d",&p1,&p2);
        scanf("%d",&n);

        for(i=0;i<n;i++){
            scanf("%lf %lf",&ang,&speed);

            rad = ang * PI / 180.0;
            dist = (speed * cos(rad) / G) * (speed * sin(rad) + sqrt((speed * sin(rad)) * (speed * sin(rad)) + 2 * G * h));

            if(dist>=p1 && dist<=p2){
                printf("%.5lf -> DUCK\n",dist);
            }
            else{
                printf("%.5lf -> NUCK\n",dist);
            }
        }
    }
    return 0;
}

