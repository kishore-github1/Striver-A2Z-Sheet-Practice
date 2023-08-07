#include <bits/stdc++.h>
using namespace std;

int splitArray(vector<int> &nums, int k)
{
    int n = nums.size();
    if(k>n) return -1;
    int low = 0, high = 0;
    for (auto x : nums)
    {
        high += x;
        low = max(low, x);
    }
    while (low <= high)
    {
        int mid = (low + high) / 2;

        int sum = 0, count = 0;
        for (auto i : nums)
        {
            if (sum + i <= mid)
            {
                sum += i;
            }
            else
            {
                count++;
                sum = i;
            }
        }
        if (count >= k) low=mid+1;
        else high = mid-1;
    }
    return low;
}

int main()
{

    return 0;
}