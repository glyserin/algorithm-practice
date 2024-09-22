#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(int number, int n, int m) {
    bool answer = 0;
    
    if (number % n == 0) {
        if (number % m == 0) {
            answer = 1;
        }
    }
        
    return answer;
}