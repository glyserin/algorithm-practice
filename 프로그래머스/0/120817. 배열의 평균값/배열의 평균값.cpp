#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    
    int n = numbers.size();
    double sum = accumulate(numbers.begin(), numbers.end(), 0.0);
    
    answer = sum / n;
    cout << answer;
    
    return answer;
}