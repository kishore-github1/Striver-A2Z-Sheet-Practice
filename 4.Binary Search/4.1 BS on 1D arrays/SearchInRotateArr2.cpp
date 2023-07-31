#include <bits/stdc++.h>
using namespace std;

bool search(vector<int> &nums, int target)
{
    int low = 0, high = nums.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (target == nums[mid])
            return 1;

        if (nums[low] == nums[mid] && nums[mid] == nums[high])
        {
            low++;
            high--;
            continue;
        }
        if (nums[low] <= nums[mid])
        {
            if (nums[low] <= target && target <= nums[mid])
            {
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        else
        {
            if (nums[mid] <= target && target <= nums[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return 0;
}

int main()
{

    return 0;
}