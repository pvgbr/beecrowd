#include <bits/stdc++.h>

using namespace std;

int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int mdc3(int a, int b, int c) {
    return mdc(mdc(a, b), c);
}

int main(){
    int x,y,z;

    while(cin >> x >> y >> z){
        cout << "tripla";
        vector<int> v;
        v.push_back(x);
        v.push_back(y);
        v.push_back(z);
        sort(v.begin(),v.end());
        if((v[2]*v[2]) == (v[0]*v[0]) + (v[1]*v[1])){
            cout << " pitagorica";
            if(mdc3(x,y,z) == 1) cout << " primitiva";
        }
        cout << endl;
    }

    return 0;
}
