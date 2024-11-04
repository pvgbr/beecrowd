#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

	int n,d;

	while((cin >> n >> d) && (n||d)){
		int verif = 0;
		vector<vector<int>> v;
		int i,j;
		for(i=0;i<d;i++){
			int num;
			vector<int> aux;
			for(j=0;j<n;j++){
				cin >> num;
				aux.push_back(num);
			}
			v.push_back(aux);
			aux.clear();
		}
		for(i=0;i<v[0].size();i++){
			int conta = 0;
			for(j=0;j<v.size();j++){
				if(v[j][i]==1){
					conta++;
				}
			}
			if(conta == d){
				verif++;
			}
		}
		if(verif > 0){
			cout << "yes" << endl;
		}
		else{
			cout << "no" << endl;
		}
	}

	return 0;
}
