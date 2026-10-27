#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> people, int limit) {
    int num = 0;
    
    int minIdx = 0;
    int maxIdx = people.size() - 1;
    
    sort(people.begin(), people.end());
    
    while (minIdx <= maxIdx) {        
        if (people[minIdx] + people[maxIdx] > limit) {
            maxIdx--;
            num++;
            continue;
        }
        
        minIdx++;
        maxIdx--;
        
        num++;
    }
    
    return num;
}