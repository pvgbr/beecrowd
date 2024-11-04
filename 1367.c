#include <stdio.h>
#include <string.h>

int main(){
    int n;
    int i,resol,penal,pos,t,erradas[26],time[26];
    char s,julgamento[10];

    while(scanf("%d",&n) && n != 0){
        resol = 0;
        penal = 0;
        for(i=0;i<26;i++){
            erradas[i] = 0;
            time[i] = 0;
        }
        for(i=0;i<n;i++){
            scanf(" %c %d %s",&s,&t,julgamento);
            pos = s - 'A';
            if(strcmp(julgamento, "correct") == 0){
                if(time[pos] == 0){
                    resol++;
                    time[pos] = t;
                    penal = penal + t + 20 * erradas[pos];
                }
            }
            else{
                erradas[pos]++;
            }
        }
        printf("%d %d\n",resol,penal);
    }

    return 0;
}
