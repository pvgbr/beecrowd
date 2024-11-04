#include <stdio.h>
#include <string.h>

int main(){
    int n;
    char frase[200001];
    char *token;

    scanf("%d",&n);
    scanf(" %[^\n]",frase);

    token = strtok(frase," ");
    int i = 0;
    while(token != NULL){
        if(strlen(token) == 3 && (token[0] == 'O' || token[0] == 'U') && (token[1] == 'B' || token[1] == 'R')) token[2] = 'I';
        if(i==0) printf("%s",token);
        else printf(" %s",token);
        token = strtok(NULL," ");
        i++;
    }
    printf("\n");

    return 0;
}
