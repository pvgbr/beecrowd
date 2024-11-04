#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int mat[n][m], d[n][m];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            d[i][j] = 2000000;

    int px = -1, py = -1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat[i][j];
            if(mat[i][j] == 3){
                px = i;
                py = j;
                d[px][py] = 0;
            }
        }
    }

    int resp = 20000000;
    queue<pair<int,int>> q;
    q.push({px, py});
    while(!q.empty()){
        int x = q.front().first, y = q.front().second;
        int curd = d[x][y] + 1;
        if(mat[x][y] == 0) resp = min(resp, d[x][y]);

        q.pop();
        if(x > 0 && mat[x-1][y] != 2 && curd < d[x-1][y]){
            d[x-1][y] = curd;
            q.push({x-1, y});
        }
        if(y > 0 && mat[x][y-1] != 2 && curd < d[x][y-1]){
            d[x][y-1] = curd;
            q.push({x, y-1});
        }
        if(y+1 < m && mat[x][y+1] != 2 && curd < d[x][y+1]){
            d[x][y+1] = curd;
            q.push({x, y+1});
        }
        if(x+1 < n && mat[x+1][y] != 2 && curd < d[x+1][y]){
            d[x+1][y] = curd;
            q.push({x+1, y});
        }
    }

    cout << resp << endl;

    return 0;
}
