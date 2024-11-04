#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long d;
        int i,b;
        cin >> d >> i >> b;

        vector<int> precos(i);
        for(int j=0;j<i;++j){
            cin >> precos[j];
        }

        int maxbolos = 0;

        for(int k=0;k<b;++k){
            int q;
            cin >> q;

            long long custobolo = 0;
            for(int j=0;j<q;++j){
                int ing,quant;
                cin >> ing >> quant;
                custobolo += precos[ing] * quant;
            }

            if(custobolo <= d){
                int bolos = d / custobolo;
                maxbolos = max(maxbolos, bolos);
            }
        }

        cout << maxbolos << endl;
    }

    return 0;
}
