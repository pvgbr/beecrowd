#include <stdio.h>
#include <string.h>

int main(){
    int i,n,q,len;
    char word[51];

    scanf("%d",&n);
    while(n--){
        scanf("%s",word);
        scanf("%d",&q);
        len = strlen(word);
        for(i=0;i<len;i++){
            if(word[i]-q < 65){
                word[i] = (word[i] - q) + 26;
            }
            else{
                word[i] = word[i] - q;
            }
        }
        printf("%s\n",word);
    }

    return 0;
}

