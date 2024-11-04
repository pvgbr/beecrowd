#include <stdio.h>
#include <string.h>
char verifica(char tauto[1001]){
    char word,word2;
    int i;
    word = tauto[0];
    if(word >= 65 && word <= 90){
        word2 = word + 32;
    }
    else{
        word2 = word - 32;
    }
    for(i=0;i<strlen(tauto);i++){
        if(tauto[i] == ' '){
            if(tauto[i+1] != word && tauto[i+1] != word2){
                return 'N';
            }
        }
    }
    return 'Y';
}
int main(){
    char tauto[1001];
    while(1){
        scanf(" %[^\n]", tauto);
        if(strcmp("*",tauto)==0){
            break;
        }
        printf("%c\n",verifica(tauto));
    }
    return 0;
}
