#include <stdio.h>
#include <string.h>

int main(){
    int n,k,i,j,equal=0;
    char idioma[21],ideal[21];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        equal=0;
        scanf("%d",&k);
        if((k>=2)&&(k<=100)){
            for(j=0;j<k;j++){
                scanf("%s",&idioma);
                if(j==0){
                    strcpy(ideal,idioma);
                    equal++;
                }
                else{
                    if(strcmp(ideal,idioma)==0){
                        equal++;
                    }
                }
            }
            if(equal==k){
                printf("%s\n",ideal);
            }
            else{
                printf("ingles\n");
            }
        }
    }
    return 0;
}

