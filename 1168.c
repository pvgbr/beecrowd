#include <stdio.h>
#include <string.h>

int main(){
    int n,i,j,n2;
    char num[101];
    int leds[10] = {6,2,5,5,4,5,6,3,7,6};
    int total=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",num);
        total=0;
        for(j=0;j<strlen(num);j++){
            n2 = num[j] - '0';
            total = total + leds[n2];
        }
        printf("%d leds\n",total);
    }
    return 0;
}
