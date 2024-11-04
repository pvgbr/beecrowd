#include <bits/stdc++.h>
using namespace std;

struct Aresta{
    int destino,custo;
};

int dijkstra(int C, int V, const vector<vector<Aresta>>& grafo){
    vector<vector<int>> dist(C + 1, vector<int>(2, INT_MAX));
    dist[1][0] = 0;
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> fila;
    fila.push({0,{1,0}});

    while(!fila.empty()){
        int d = fila.top().first;
        int u = fila.top().second.first;
        int pari = fila.top().second.second;
        fila.pop();

        if(d > dist[u][pari]) continue;

        for(const auto &aresta : grafo[u]){
            int v = aresta.destino;
            int custo = aresta.custo;
            int npari = (pari+1) % 2;

            if(dist[v][npari] > dist[u][pari] + custo){
                dist[v][npari] = dist[u][pari] + custo;
                fila.push({dist[v][npari], {v, npari}});
            }
        }
    }
    if(dist[C][0] == INT_MAX) return -1;
    return dist[C][0];
}

int main(){
    int C,V;
    cin >> C >> V;
    vector<vector<Aresta>> grafo(C+1);

    for(int i=0;i<V;i++){
        int C1,C2,G;
        cin >> C1 >> C2 >> G;
        grafo[C1].push_back({C2,G});
        grafo[C2].push_back({C1,G});
    }

    int result = dijkstra(C,V,grafo);
    cout << result << endl;

    return 0;
}