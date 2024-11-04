#include <iostream>
#include <string>

using namespace std;

int main(){
    int n,m;


    cin >> n >> m;
    while(m--){
        string acao;
        cin >> acao;
        if(acao == "fechou") n++;
        else n--;
    }
    cout << n << endl;

    return 0;
}
