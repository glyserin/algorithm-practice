#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void dfs(int i, int n, vector<vector<int>>& computers, vector<int>& visited) {
    visited[i] = 1;
    
    for (int j = 0; j < n; j++) {
        if (computers[i][j] == 1 && visited[j] == 0) {
            dfs(j, n, computers, visited);
        }
    }
}

int solution(int n, vector<vector<int>> computers) {
    vector<int> visited(n, 0);
    
    int answer = 0;
    
    for (int i = 0; i < n; i++) {
        if (visited[i] == 0) {
            answer++;
            dfs(i, n, computers, visited);
        }
    }
    
    return answer;
}