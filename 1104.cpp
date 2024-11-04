#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int A,B;
    int i,carta;
    int trocaAlice,trocaBeatriz;

    while(cin >> A >> B && (A != 0 || B != 0)){
        set<int> alice;
        set<int> beatriz;

        for(i=0;i<A;i++){
            cin >> carta;
            alice.insert(carta);
        }
        for(i=0;i<B;i++){
            cin >> carta;
            beatriz.insert(carta);
        }

        trocaAlice = 0;
        trocaBeatriz = 0;

        for(int carta : alice){
            if(beatriz.find(carta) == beatriz.end()){
                trocaAlice++;
            }
        }

        for(int carta : beatriz){
            if(alice.find(carta) == alice.end()){
                trocaBeatriz++;
            }
        }

        cout << min(trocaAlice, trocaBeatriz) << endl;
    }

    return 0;
}

