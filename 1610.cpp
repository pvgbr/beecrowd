#include <bits/stdc++.h>
using namespace std;

bool dfs(int documento, vector<vector<int>>& dependencias, vector<int>& situacao){
    if(situacao[documento] == 1) return true;
    if(situacao[documento] == 2) return false;

    situacao[documento] = 1;

    for(int dependente : dependencias[documento]){
        if(dfs(dependente, dependencias, situacao)) return true;
    }
    situacao[documento] = 2;
    return false;
}

int main(){
    int T;
    cin >> T;

    while(T--){
        int N,M;
        cin >> N >> M;

        vector<vector<int>> dependencias(N+1);
        vector<int> situacao(N+1,0);

        for(int i=0;i<M;i++){
            int A, B;
            cin >> A >> B;
            dependencias[A].push_back(B);
        }

        bool ciclo = false;

        for(int i=1;i<=N;i++){
            if(situacao[i] == 0 && dfs(i,dependencias,situacao)){
                ciclo = true;
                break;
            }
        }

        if(ciclo){
          cout << "SIM" << endl;
        }
        else{
          cout << "NAO" << endl;
        }
    }

    return 0;
}
