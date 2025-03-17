/*Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> result;
        // sort array ascending
        sort(nums.begin(), nums.end());

        // traverse the array
        for (int i = 0; i < nums.size() - 2; i++)
        {
            // skip duplicate element
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }

            // Calculator Sum
            int left = i + 1;
            int right = nums.size() - 1;

            while (left < right)
            {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0)
                {
                    // found a triplet(three element)
                    result.push_back({nums[i], nums[left], nums[right]});
                    // move the left pointer and avoid duplicates
                    while (left < right && nums[left] == nums[left + 1])
                    {
                        left++;
                    }
                    // move the right pointer and avoid duplicates
                    while (left < right && nums[right] == nums[right - 1])
                    {
                        right--;
                    }

                    // Move left and right pointer to find other element
                    left++;
                    right--;
                } else if(sum < 0){
                    ++left;
                } else {
                    --right;
                }
            }
        }
        return result;
    }
};