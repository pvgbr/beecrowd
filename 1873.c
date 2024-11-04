#include <stdio.h>
#include <string.h>

char* resultado(char rajesh[10], char sheldon[10]){
    if(strcmp(rajesh,sheldon) == 0){
        return "empate";
    }
    if( (strcmp(rajesh,"tesoura") == 0 && (strcmp(sheldon,"papel") == 0 || strcmp(sheldon,"lagarto") == 0)) ||
        (strcmp(rajesh,"papel") == 0 && (strcmp(sheldon,"pedra") == 0 || strcmp(sheldon,"spock") == 0)) ||
        (strcmp(rajesh,"pedra") == 0 && (strcmp(sheldon,"tesoura") == 0 || strcmp(sheldon,"lagarto") == 0)) ||
        (strcmp(rajesh,"lagarto") == 0 && (strcmp(sheldon,"spock") == 0 || strcmp(sheldon,"papel") == 0)) ||
        (strcmp(rajesh,"spock") == 0 && (strcmp(sheldon,"tesoura") == 0 || strcmp(sheldon,"pedra") == 0)) ) {
        return "rajesh";
    }
    return "sheldon";
}

int main(){
    int i,c;
    char rajesh[10],sheldon[10];

    scanf("%d", &c);
    for(i=0;i<c;i++){
        scanf("%s %s",rajesh,sheldon);
        printf("%s\n",resultado(rajesh,sheldon));
    }

    return 0;
}
