#include <bits/stdc++.h>
using namespace std;

int visited[21];
int V;
int adj[21][21];

void pathR(int v, int prof) {
    visited[v] = 1;
    if (prof)
        cout << " pathR(G," << v << ")" << endl;

    for (int w = 0; w < V; w++) {
        if (adj[v][w] == 1) {
            cout << "  ";
            for (int i = 0; i < prof; i++)
                cout << "  ";
            cout << v << "-" << w;

            if (visited[w] == 0) {
                pathR(w, prof + 1);
            } else cout << endl;
        }
    }
}

int main() {
    int N;
    cin >> N;
    for (int caso = 1; caso <= N; caso++) {
        int v, e;
        cin >> v >> e;
        V = v;

        for (int i = 0; i < V; i++)
            for (int j = 0; j < V; j++)
                adj[i][j] = 0;
        for (int i = 0; i < V; i++)
            visited[i] = -1;

        for (int i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            adj[a][b] = 1;
            visited[a] = 0;
            visited[b] = 0;
        }
        cout << "Caso " << caso << ":";
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                cout << endl;
                pathR(i, 0);
            }
        }
        cout << endl;
    }
    return 0;
}
