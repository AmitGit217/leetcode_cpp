#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> result;
        unordered_map<int, int> ourMap;

        for (int i = 0; i < nums.size(); i++)
        {
            int diff = target - nums[i];
            if (ourMap.find(diff) != ourMap.end() && ourMap.find(diff)->second != i)
            {
                result.push_back(i);
                result.push_back(ourMap.find(diff)->second);
            }
            else
            {
                ourMap[nums[i]] = i;
            }
        }
        return result;
    }
};