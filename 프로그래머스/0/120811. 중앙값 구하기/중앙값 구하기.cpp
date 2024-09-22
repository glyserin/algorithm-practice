#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    
    int n = array.size();
    
    sort(array.begin(), array.end());
    answer = array.at(n / 2);
    
    return answer;
}