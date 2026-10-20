#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> daysLeft;
    
    for (int i = 0; i < (int)progresses.size(); i++) {
        daysLeft.push_back((100 - progresses[i] + speeds[i] - 1) / speeds[i]);
        cout << daysLeft[i] << " ";
    }
    
    int deployDay = daysLeft[0];
    int deployNum = 1;
    
    for (int i = 1; i < (int)daysLeft.size(); i++) {
        if (daysLeft[i] <= deployDay) {
            deployNum++;
        } else {
            answer.push_back(deployNum);
            deployDay = daysLeft[i];
            deployNum = 1;
        }
    }
    
    answer.push_back(deployNum);
    
    return answer;
}