#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int i,n,t,idade,pos,c=1;
    vector<int> v;

    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&idade);
            v.push_back(idade);
        }
        sort(v.begin(), v.end());
        pos = (v.size() / 2);
        printf("Case %d: %d\n",c,v[pos]);
        c++;
        v.clear();
    }

    return 0;
}

