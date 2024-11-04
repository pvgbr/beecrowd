#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,b;

    while(cin >> n >> b && (n || b)){
        set<int> s;
        vector<int> v;
        for(int i = 0;i<b;i++){
            int num;
            cin >> num;
            v.push_back(num);
        }
        for(int i = 0;i<b;i++){
            for(int j = 0;j<b;j++){
                if(i!=j){
                    s.insert(abs(v[i] - v[j]));
                }
                s.insert(v[i]);
            }
        }
        if(s.size() == n+1) cout << "Y" << endl;
        else cout << "N" << endl;
    }

}
