#include <iostream>
#include <string>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;
int main(){
    char frase[3000];
    char *token = NULL;
    vector<string> palavras;
    int n;
    int ult=0;

    cin >> n;
    while(n--){
        ult = 0;
        scanf(" %[^\n]",frase);
        token = strtok(frase," ");
        while(token != NULL){
            palavras.push_back(token);
            token = strtok(NULL," ");
        }
        stable_sort(palavras.begin(), palavras.end(), [](const string &a, const string &b) {return a.size() > b.size();});
        for(int i=0;i<palavras.size();i++){
            if(i>0){
                cout << " ";
            }
            cout << palavras[i];
        }
        cout << endl;
        palavras.clear();
    }
    return 0;
}
