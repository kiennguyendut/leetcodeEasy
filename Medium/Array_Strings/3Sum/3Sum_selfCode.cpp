#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
        vector<vector<int>> threeSum(vector<int>& nums) {
            vector<vector<int>> result;
            //sort array ascending
            sort(nums.begin(), nums.end());
            //traverse the array
            for (int i = 0; i < nums.size() - 2; i++) {
                //skip duplicate element
                if (i > 0 && nums[i] == nums[i - 1]) {
                    continue;
                }

                //calculate sum
                int left = i + 1;
                int right = nums.size() - 1;

                while (left < right) {
                    int sum = nums[i] + nums[left] + nums[right];
                    if(sum == 0) {
                        //found a triplet
                        result.push_back({nums[i], nums[left], nums[right]});
                        //move the left pointer and avoid duplicates
                        while(left < right && nums[left] == nums[left + 1]) {
                            left++;
                        }
                        //move the right pointer and avoid duplicates
                        while(left < right && nums[right] == nums[right - 1]) {
                            right--;
                        }
                    } else if(sum < 0) {
                        left++;
                    }else {
                        right--;
                    }
                }
                return result;
            }
        }
}