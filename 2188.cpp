#include <bits/stdc++.h>
using namespace std;

int main(){
    int t=1,n;
    while(cin >> n && n > 0){
        cout << "Teste " << t++ << endl;
        int x1 = -10001, y1 = 10001, x2 = 10001, y2 = -10001;
        for(int i=0;i<n;i++){
            int x,y,u,v;
            cin >> x >> y >> u >> v;
            x1 = max(x1,x);
            y1 = min(y1,y);
            x2 = min(x2,u);
            y2 = max(y2,v);
        }
        if(x1 < x2 && y1 > y2){
            cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
        }
        else{
            cout << "nenhum" << endl;
        }
        cout << endl;
    }
    return 0;
}
