#include <vector>
#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 1) return nums.size(); // Trường hợp mảng có 0 hoặc 1 phần tử

        for (int i = 0; i < nums.size() - 1;) {   // Giới hạn vòng lặp để tránh vượt giới hạn
            if (nums[i] == nums[i + 1]) {
                nums.erase(nums.begin() + i + 1); // Xóa phần tử lặp
            } else {
                ++i;                              // Chỉ tăng `i` khi không xóa
            }
        }

        return nums.size();
    }
};
