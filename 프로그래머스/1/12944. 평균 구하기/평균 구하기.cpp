#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer;
    double sum = 0;
    
    for (auto i : arr) {
        sum += i;
    }
    
    answer = sum / arr.size();
    return answer;
}