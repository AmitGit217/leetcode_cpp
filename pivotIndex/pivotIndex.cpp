#include <vector>
using namespace std;

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int leftSum = 0;
        int rightSum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            rightSum += nums[i];
        };

        for (int i = 0; i < nums.size(); i++)
        {
            if (leftSum == rightSum - nums[i])
            {
                return i;
            }
            leftSum += nums[i];
            rightSum -= nums[i];
        };

        return -1;
    }
};

int main()
{
    return 0;
}