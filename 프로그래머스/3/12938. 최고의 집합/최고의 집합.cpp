#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int s) {
    
    if (s < n) {
        return {-1};
    }
    
    vector<int> answer (n, s/n);
    int left = s % n;
    
    if (left != 0) {
        for (int i = n - 1; i >= n - left ; i--) {
            answer.at(i)++;
        }
    }

    return answer;
}