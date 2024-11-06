#include <vector>
#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // Đảm bảo k không lớn hơn kích thước mảng

        // Bước 1: Đảo ngược toàn bộ mảng
        reverse(nums.begin(), nums.end());
        // Bước 2: Đảo ngược k phần tử đầu tiên
        reverse(nums.begin(), nums.begin() + k);
        // Bước 3: Đảo ngược phần còn lại
        reverse(nums.begin() + k, nums.end());
    }
};