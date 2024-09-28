#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

struct cmp {
    bool operator()(vector<int> a, vector<int> b) {
        return a.at(1) > b.at(1);
    }
};

int solution(vector<vector<int>> jobs) {
    int sum = 0;
    int i = 0;
    int currtime = 0;
    
    sort(jobs.begin(), jobs.end());
    
    priority_queue<vector<int>, vector<vector<int>>, cmp> pq; 
    
    while (i < jobs.size() || !pq.empty()) {
        if (jobs.size() > i && currtime >= jobs.at(i).at(0)) {
            pq.push(jobs.at(i));
            i++;
            continue;
        }
        
        if(!pq.empty()) {
            currtime += pq.top()[1];
            sum += currtime - pq.top()[0];
            pq.pop();
        }
        else {
            currtime = jobs.at(i).at(0);
        }
    }
    
    
    
    return sum / jobs.size();
}