#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int nToPick = nums.size() / 2;
    sort(nums.begin(), nums.end());
    
    int nType = 1;
    
    for (int i = 1; i < (int)nums.size(); i++) {
        if (nums[i] != nums[i - 1]) {
            nType++;
        }
    }

    return min(nType, nToPick);
}