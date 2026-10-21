#include<vector>
#include<bits/stdc++.h>
using namespace std;

int solution(vector<vector<int> > maps)
{
    int n = maps.size();
    int m = maps[0].size();
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    vector<vector<int>> distanceToHere(n, vector<int>(m, 0)); // 각 지점까지의 최단거리
    
    queue<pair<int,int>> Q;
    
    Q.push({0,0});
    distanceToHere[0][0] = 1;
    
    while (!Q.empty()) {
        int x = Q.front().first;
        int y = Q.front().second;
        Q.pop();
        
        if (x == n - 1 && y == m - 1) {
            return distanceToHere[x][y];
        }
        
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if (maps[nx][ny] == 0) continue;
            if (distanceToHere[nx][ny] != 0) continue;
            
            distanceToHere[nx][ny] = distanceToHere[x][y] + 1;
            Q.push({nx, ny});
        }
    }
    
    return -1;
}