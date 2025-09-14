//Given an integer array nums, return true if there exists a triple of indices (i, j, k) such that i < j < k and nums[i] < nums[j] < nums[k]. If no such indices exists, return false.

/*Để kiểm tra bộ ba tăng dần bất kỳ, ý tưởng là:

Duyệt từ trái sang phải, luôn lưu:

first = giá trị nhỏ nhất tìm thấy.

second = giá trị nhỏ nhì tìm thấy sau first.

Nếu tìm được phần tử nào lớn hơn second, tức là đã có first < second < nums[k] ⇒ trả về true. */
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX, second = INT_MAX;
        for (int num : nums) {
            if (num <= first) {
                first = num;
            } else if (num <= second) {
                second = num;
            }else {
                // tìm thấy giá trị thứ ba > second => triplet tồn tại
                return true;
            }
        }
        return false;
    }
};