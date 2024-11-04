#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int i,j,k,n,m,p,quant=0;
    vector<int> qn;
    vector<int> q;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        quant = 0;
        scanf("%d",&m);
        for(j=0;j<m;j++){
            scanf("%d",&p);
            qn.push_back(p);
            q.push_back(p);
        }
        sort(qn.rbegin(),qn.rend());
        for(k=0;k<q.size();k++){
            if(qn[k] == q[k]){
                quant++;
            }
        }
        printf("%d\n",quant);
        q.clear();
        qn.clear();
    }

    return 0;
}
