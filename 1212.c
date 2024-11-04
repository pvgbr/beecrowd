#include <stdio.h>

int main(){
    unsigned int n1,n2;
    int carry,carryConta,digito1,digito2;

    while(scanf("%u %u",&n1,&n2) && (n1||n2)){
        carryConta = 0;
        carry = 0;
        while(n1 > 0 || n2 > 0){
            digito1 = n1 % 10;
            digito2 = n2 % 10;
            if(digito1 + digito2 + carry > 9){
                carryConta++;
                carry = 1;
            }
            else{
                carry = 0;
            }
            n1 /= 10;
            n2 /= 10;
        }
        if(carryConta == 0) printf("No carry operation.\n");
        else if(carryConta == 1) printf("1 carry operation.\n");
        else printf("%d carry operations.\n",carryConta);
    }

    return 0;
}

