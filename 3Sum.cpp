#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        // Sort the array
        sort(nums.begin(), nums.end());

        // Traverse the array
        for (int i = 0; i < nums.size() - 2; ++i) {
            // Skip duplicate elements
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int left = i + 1, right = nums.size() - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0) {
                    // Found a triplet
                    result.push_back({nums[i], nums[left], nums[right]});
                    // Move the left pointer and avoid duplicates
                    while (left < right && nums[left] == nums[left + 1]) ++left;
                    // Move the right pointer and avoid duplicates
                    while (left < right && nums[right] == nums[right - 1]) --right;
                    // Move both pointers
                    ++left;
                    --right;
                } else if (sum < 0) {
                    ++left;
                } else {
                    --right;
                }
            }
        }

        return result;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = solution.threeSum(nums);

    // Print the result
    for (const auto& triplet : result) {
        cout << "[" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "]\n";
    }

    return 0;
}