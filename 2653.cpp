#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
    set<string> j;
    string joia;

    while(cin >> joia){
        j.insert(joia);
    }
    cout << j.size() << endl;

    return 0;
}
