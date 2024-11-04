#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,M;
    vector<int> v;
    unordered_set<int> remov;
    cin >> N;
    for(int i=0;i<N;i++){
        int num;
        cin >> num;
        v.push_back(num);
    }
    cin >> M;
    for(int i=0;i<M;i++){
        int rem;
        cin >> rem;
        remov.insert(rem);
    }
    bool prim = true;
    for(int i=0;i<v.size();i++){
        if(remov.find(v[i]) == remov.end()){
            if(!prim){
                cout << " ";
            }
            cout << v[i];
            prim = false;
        }
    }
    cout << endl;
}
