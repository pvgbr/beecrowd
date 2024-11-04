#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int i,n,add;
    vector<int> v;
    vector<int> rm;

    while(scanf("%d",&n) && n != 0){
        for(i=1;i<=n;i++){
            v.push_back(i);
        }
        for(i=0;i<n;i++){
            rm.push_back(v.front());
            v.erase(v.begin());
            v.push_back(v.front());
            v.erase(v.begin());
        }
        printf("Discarded cards: ");
        for(i=0;i<rm.size()-1;i++){
            if(i!=(rm.size())-2){
                printf("%d, ",rm[i]);
            }
            else{
                printf("%d\n",rm[i]);
            }
        }
        printf("Remaining card: %d\n",v[0]);
        v.clear();
        rm.clear();
    }
    return 0;
}
